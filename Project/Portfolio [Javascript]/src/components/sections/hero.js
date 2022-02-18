import React, { useState, useEffect } from 'react';
import { CSSTransition, TransitionGroup } from 'react-transition-group';
import styled from 'styled-components';
import { navDelay, loaderDelay } from '@utils';
import { usePrefersReducedMotion } from '@hooks';
// import { email } from '@config';

const StyledHeroSection = styled.section`
  ${({ theme }) => theme.mixins.flexCenter};
  flex-direction: column;
  align-items: flex-start;
  min-height: 100vh;
  padding: 0;

  @media (max-width: 480px) and (min-height: 700px) {
    padding-bottom: 10vh;
  }

  h1 {
    margin: 0 0 30px 4px;
    color: var(--black);
    font-family: var(--font-mono);
    font-size: clamp(var(--fz-sm), 5vw, var(--fz-md));
    font-weight: 400;

    @media (max-width: 480px) {
      margin: 0 0 20px 2px;
    }
  }

  h3 {
    margin-top: 10px;
    color: var(--black);
    line-height: 0.9;
  }

  h2 {
     color: var(--black);
    line-height: 0.6;
  }

  p {
    color: var(--black);
    max-width: 540px;
  }

  .email-link {
    ${({ theme }) => theme.mixins.bigButton};
    margin-top: 100px;
  }
`;

const Hero = () => {
  const [isMounted, setIsMounted] = useState(false);
  const prefersReducedMotion = usePrefersReducedMotion();

  useEffect(() => {
    if (prefersReducedMotion) {
      return;
    }

    const timeout = setTimeout(() => setIsMounted(true), navDelay);
    return () => clearTimeout(timeout);
  }, []);

  const one = <h1>Hi, My Name is</h1>;
  const two = <h2 className="big-heading">Muhammad Badrul</h2>;
  const three = <h3 className="big-heading">I Share what I Learn.</h3>;
  const four = (
    <>
      <p align="justify">
      I'm a Bangladesh based developer with a goal-driven creative mindset and passion for learning and innovating. I'm Studying Computer Science & Engineering at <a href="https://www.lus.ac.bd/" target="_blank" rel="noreferrer">
        Leading University 
      </a>
      .

      I am a passoinate programmer. I started my programing career at the begining of the 2nd year of my University. Currently, I’m focused on learning Javascript.
      </p>
      
    </>
  );
  const five = (
    <a
      className="email-link"
      href="https://www.linkedin.com/in/muhammadbadrul/"
      target="_blank"
      rel="noreferrer">
      Hire Me!
    </a>
  );

  const items = [one, two, three, four, five];

  return (
    <StyledHeroSection>
      {prefersReducedMotion ? (
        <>
          {items.map((item, i) => (
            <div key={i}>{item}</div>
          ))}
        </>
      ) : (
        <TransitionGroup component={null}>
          {isMounted &&
            items.map((item, i) => (
              <CSSTransition key={i} classNames="fadeup" timeout={loaderDelay}>
                <div style={{ transitionDelay: `${i + 1}00ms` }}>{item}</div>
              </CSSTransition>
            ))}
        </TransitionGroup>
      )}
    </StyledHeroSection>
  );
};

export default Hero;
