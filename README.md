# Practice 11 · Normalize + pointer read

**Week 11 · References & pointers**  
**Theme:** A nickname, or an address


## Demo video (required)

Paste a link to a short video of you running this assignment (tool + code + run).
Work without a working video link is incomplete.

**Your demo:** _add your link here_


## What to build
A helper that uses a reference to change a caller’s box (clamp a score to 0–100, or swap). A pointer that **reads** a box. Before / after output. One sentence in the README: alias vs address.

## Requirements
- A function with at least one `int&` (or `double&`) parameter
- A pointer that reads (`*p`) — it does not own memory
- Print before and after
- No `new` / `delete`
- README: one sentence on alias vs address

## Sample session
```
Score before: 140
Score after: 100
Via pointer: 100
```

## Starter
`main.cpp` — or extend the lab.

## Deliverables
1. Course-visible GitHub repo
2. README with the alias/address sentence
3. Short demo video (tool + code + run)
4. Canvas links

## Scope fence
No allocation. No pointer arithmetic. No double pointers.

## Integrity
- AI = tutor, not ghostwriter
- Fake ownership → zero
- Due: Monday night (not Sunday)
- Discussions (every week): first post Friday, replies Sunday
- Late: course policy (−10%/day unless stated otherwise)

## Rubric
Graded on: it runs, it meets the prompt, output is labeled, and the GitHub repo plus demo video are there.

## Getting started

1. Fork this repo on GitHub.
2. Clone your fork.
3. Compile and run:

```bash
g++ -std=c++17 -o program main.cpp && ./program
```

On Windows (Visual Studio), open `main.cpp` and use **Local Windows Debugger**.
4. Record a short demo that shows your tool, your code, and a real run.
5. Paste the video link in the **Demo video** section above.
6. Submit your fork URL on Canvas.
