<html>
<head>
<title>word.h</title>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8">
<style type="text/css">
.s0 { color: #7a7e85;}
.s1 { color: #bcbec4;}
.s2 { color: #b3ae60;}
.s3 { color: #6aab73;}
.s4 { color: #cf8e6d;}
.s5 { color: #bcbec4;}
</style>
</head>
<body bgcolor="#1e1f22">
<table CELLSPACING=0 CELLPADDING=5 COLS=1 WIDTH="100%" BGCOLOR="#606060" >
<tr><td><center>
<font face="Arial, Helvetica" color="#000000">
word.h</font>
</center></td></tr></table>
<pre><span class="s0">//</span>
<span class="s0">// Created by gresa on 10/30/2024.</span>
<span class="s0">//</span>

<span class="s2">#ifndef </span><span class="s1">WORD_H</span>
<span class="s2">#define </span><span class="s1">WORD_H</span>

<span class="s2">#include </span><span class="s3">&lt;string&gt;</span>
<span class="s2">#include </span><span class="s3">&lt;vector&gt;</span>

<span class="s4">using namespace </span><span class="s1">std</span><span class="s5">; </span><span class="s0">// Added using directive</span>

<span class="s4">class </span><span class="s1">Word </span><span class="s5">{</span>
<span class="s4">private</span><span class="s1">:</span>
    <span class="s1">vector</span><span class="s5">&lt;</span><span class="s4">char</span><span class="s5">&gt; </span><span class="s1">m_currentWord</span><span class="s5">; </span><span class="s0">// No need for std:: here</span>
    <span class="s1">string m_word</span><span class="s5">;              </span><span class="s0">// No need for std:: here</span>

<span class="s4">public</span><span class="s1">:</span>
    <span class="s1">Word</span><span class="s5">(</span><span class="s1">string word</span><span class="s5">);          </span><span class="s0">// No need for std:: here</span>
    <span class="s1">string getWord</span><span class="s5">();          </span><span class="s0">// No need for std:: here</span>
    <span class="s4">void </span><span class="s1">addLetter</span><span class="s5">(</span><span class="s4">char </span><span class="s1">letter</span><span class="s5">);</span>
    <span class="s4">bool </span><span class="s1">findLetter</span><span class="s5">(</span><span class="s4">char </span><span class="s1">letter</span><span class="s5">);</span>
    <span class="s4">bool </span><span class="s1">solved</span><span class="s5">();</span>
<span class="s5">};</span>

<span class="s2">#endif</span>
</pre>
</body>
</html>