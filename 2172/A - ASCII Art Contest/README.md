<h2><a href="https://codeforces.com/contest/2172/problem/A" target="_blank" rel="noopener noreferrer">2172A — ASCII Art Contest</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2172A](https://codeforces.com/contest/2172/problem/A) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">A. ASCII Art Contest</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Three leading AI-powered creative assistants—Gemini, ChatGPT, and Claude—enter the first ever ASCII Art Contest, where they must impress a panel of human judges with their text-based masterpieces.</p><p>Each participant receives a score between 80 and 100 (inclusive). The organizers want to announce the final standing only if the judges' opinions are "close enough"; otherwise, they will ask the judges to reconsider.</p><p>Given the three integer scores of Gemini, ChatGPT, and Claude, determine the contest result:</p><ul> <li> If the maximum score and the minimum score differ by at least 10 points, print <span class="tex-font-style-tt">check again</span> (the judging seems inconsistent, so the panel must re-evaluate). </li><li> Otherwise, print <span class="tex-font-style-tt">final X</span>, where <span class="tex-font-style-tt">X</span> is the median of the three scores (the score that would be in the middle if all three were sorted in non-decreasing order). </li></ul></div><div class="input-specification"><div class="section-title">Input</div><p>A single line contains three integers $$$g, c, \ell$$$, representing the scores of Gemini, ChatGPT, and Claude respectively.</p><ul> <li> $$$80\le g, c, \ell \le 100$$$ </li></ul></div><div class="output-specification"><div class="section-title">Output</div><p>Print the required answer in a line.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0004982693358218182" id="id0010118581249533787" class="input-output-copier">Copy</div></div><pre id="id0004982693358218182">88 94 95
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007196819733421229" id="id005627981846075408" class="input-output-copier">Copy</div></div><pre id="id007196819733421229">final 94
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007591800104168495" id="id008006531878187986" class="input-output-copier">Copy</div></div><pre id="id007591800104168495">100 80 81
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005306951324520818" id="id009313514193108251" class="input-output-copier">Copy</div></div><pre id="id005306951324520818">check again
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008498971764610804" id="id008853207487650645" class="input-output-copier">Copy</div></div><pre id="id008498971764610804">98 99 98
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007879906888944865" id="id006244474231900098" class="input-output-copier">Copy</div></div><pre id="id007879906888944865">final 98
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00840523504553082" id="id008962805061261458" class="input-output-copier">Copy</div></div><pre id="id00840523504553082">95 86 85
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0012233981983659326" id="id0042506226354423726" class="input-output-copier">Copy</div></div><pre id="id0012233981983659326">check again
</pre></div></div></div>