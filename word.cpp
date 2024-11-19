<html>
<head>
<title>word.cpp</title>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8">
<style type="text/css">
.s0 { color: #7a7e85;}
.s1 { color: #bcbec4;}
.s2 { color: #b3ae60;}
.s3 { color: #6aab73;}
.s4 { color: #cf8e6d;}
.s5 { color: #bcbec4;}
.s6 { color: #2aacb8;}
</style>
</head>
<body bgcolor="#1e1f22">
<table CELLSPACING=0 CELLPADDING=5 COLS=1 WIDTH="100%" BGCOLOR="#606060" >
<tr><td><center>
<font face="Arial, Helvetica" color="#000000">
word.cpp</font>
</center></td></tr></table>
<pre><span class="s0">//</span>
<span class="s0">// Created by gresa on 10/30/2024.</span>
<span class="s0">//</span>
<span class="s2">#include </span><span class="s3">&quot;word.h&quot;</span>

<span class="s4">using namespace </span><span class="s1">std</span><span class="s5">; </span><span class="s0">// Added using directive</span>

<span class="s1">Word::Word</span><span class="s5">(</span><span class="s1">string word</span><span class="s5">) </span><span class="s1">: m_word</span><span class="s5">(</span><span class="s1">word</span><span class="s5">) {</span>
    <span class="s0">// Initialize m_currentWord with underscores</span>
    <span class="s1">m_currentWord </span><span class="s5">= </span><span class="s1">vector</span><span class="s5">&lt;</span><span class="s4">char</span><span class="s5">&gt;(</span><span class="s1">m_word</span><span class="s5">.</span><span class="s1">size</span><span class="s5">(), </span><span class="s3">'_'</span><span class="s5">);</span>
<span class="s5">}</span>

<span class="s1">string Word::getWord</span><span class="s5">() {</span>
    <span class="s4">return </span><span class="s1">string</span><span class="s5">(</span><span class="s1">m_currentWord</span><span class="s5">.</span><span class="s1">begin</span><span class="s5">(), </span><span class="s1">m_currentWord</span><span class="s5">.</span><span class="s1">end</span><span class="s5">());</span>
<span class="s5">}</span>

<span class="s4">void </span><span class="s1">Word::addLetter</span><span class="s5">(</span><span class="s4">char </span><span class="s1">letter</span><span class="s5">) {</span>
    <span class="s4">for </span><span class="s5">(</span><span class="s1">size_t i </span><span class="s5">= </span><span class="s6">0</span><span class="s5">; </span><span class="s1">i </span><span class="s5">&lt; </span><span class="s1">m_word</span><span class="s5">.</span><span class="s1">size</span><span class="s5">(); </span><span class="s1">i</span><span class="s5">++) {</span>
        <span class="s4">if </span><span class="s5">(</span><span class="s1">m_word</span><span class="s5">[</span><span class="s1">i</span><span class="s5">] == </span><span class="s1">letter</span><span class="s5">) {</span>
            <span class="s1">m_currentWord</span><span class="s5">[</span><span class="s1">i</span><span class="s5">] = </span><span class="s1">letter</span><span class="s5">;</span>
        <span class="s5">}</span>
    <span class="s5">}</span>
<span class="s5">}</span>

<span class="s4">bool </span><span class="s1">Word::findLetter</span><span class="s5">(</span><span class="s4">char </span><span class="s1">letter</span><span class="s5">) {</span>
    <span class="s4">return </span><span class="s1">m_word</span><span class="s5">.</span><span class="s1">find</span><span class="s5">(</span><span class="s1">letter</span><span class="s5">) != </span><span class="s1">string::npos</span><span class="s5">;</span>
<span class="s5">}</span>

<span class="s4">bool </span><span class="s1">Word::solved</span><span class="s5">() {</span>
    <span class="s4">return </span><span class="s1">string</span><span class="s5">(</span><span class="s1">m_currentWord</span><span class="s5">.</span><span class="s1">begin</span><span class="s5">(), </span><span class="s1">m_currentWord</span><span class="s5">.</span><span class="s1">end</span><span class="s5">()) == </span><span class="s1">m_word</span><span class="s5">;</span>
<span class="s5">}</span>
</pre>
</body>
</html>