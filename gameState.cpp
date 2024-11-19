<html
<head>
<title>gameState.cpp</title>
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
gameState.cpp</font>
</center></td></tr></table>
<pre><span class="s0">//</span>
<span class="s0">// Created by gresa on 10/30/2024.</span>
<span class="s0">//</span>
<span class="s2">#include </span><span class="s3">&quot;gameState.h&quot;</span>

<span class="s4">using namespace </span><span class="s1">std</span><span class="s5">; </span><span class="s0">// Added using directive</span>

<span class="s1">GameState::GameState</span><span class="s5">() </span><span class="s1">: m_nextState</span><span class="s5">(</span><span class="s6">0</span><span class="s5">) {}</span>

<span class="s1">string GameState::getState</span><span class="s5">() {</span>
    <span class="s1">string currentState</span><span class="s5">; </span><span class="s0">// No need for std:: here</span>
    <span class="s4">for </span><span class="s5">(</span><span class="s4">const </span><span class="s1">string</span><span class="s5">&amp; </span><span class="s1">s : m_state</span><span class="s5">) { </span><span class="s0">// No need for std:: here</span>
        <span class="s1">currentState </span><span class="s5">+= </span><span class="s1">s </span><span class="s5">+ </span><span class="s3">&quot; &quot;</span><span class="s5">;</span>
    <span class="s5">}</span>
    <span class="s4">return </span><span class="s1">currentState</span><span class="s5">;</span>
<span class="s5">}</span>


<span class="s4">void </span><span class="s1">GameState::addState</span><span class="s5">() {</span>
    <span class="s4">if </span><span class="s5">(</span><span class="s1">m_nextState </span><span class="s5">&lt; </span><span class="s1">m_allStates</span><span class="s5">.</span><span class="s1">size</span><span class="s5">()) {</span>
        <span class="s1">m_state</span><span class="s5">.</span><span class="s1">push_back</span><span class="s5">(</span><span class="s1">m_allStates</span><span class="s5">[</span><span class="s1">m_nextState</span><span class="s5">]);</span>
        <span class="s1">m_nextState</span><span class="s5">++;</span>
    <span class="s5">}</span>
<span class="s5">}</span>

<span class="s4">bool </span><span class="s1">GameState::gameOver</span><span class="s5">() {</span>
    <span class="s4">return </span><span class="s1">m_nextState </span><span class="s5">&gt;= </span><span class="s1">m_allStates</span><span class="s5">.</span><span class="s1">size</span><span class="s5">();</span>
<span class="s5">}</span>
</pre>
</body>
</html>