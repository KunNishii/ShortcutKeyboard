## Title
### ShortcutKeyboard

## Overview
### Arduinoを用いたショートカットキーボード

## 回路図画像
<img width="1151" alt="ShortcutKey" src="https://user-images.githubusercontent.com/91854417/154835290-ac25a7d6-833d-4bb3-90bb-0608ef3af485.png">

## 開発環境
* Arduino IDE 1.8.19
* Arduino micro

## Requirement
### 使用ライブラリ
* Keyboard.h
* avadweb_Switch.h

## Features
#### スイッチ一つでショートカットが実行可能です。

### 作成の目的
#### 作業効率化

#### 家など、プライベートでの環境ではマウスのボタンにショートカットを設定し使用していたが会社では規定によりマウスのショートカット割り当ての設定アプリがインストールできず、マウスのボタンを使用できなかった。ボタン1つでコピーなどのショートカットを実行できるサブキーボードを作成すれば作業効率化が図れるのではないかと考えた為。

#### よく使用すると考えられるショートカットを抽出し、各スイッチへ割り当てを行なった。
#### 各スイッチの設定は以下。

### ショートカットの設定
* 左から1番目のスイッチ：検索
* 左から2番目のスイッチ：全選択
* 左から3番目のスイッチ：保存
* 左から4番目のスイッチ：ペースト
* 左から5番目のスイッチ：コピー
* 左から6番目のスイッチ：切り取り
* 左から7番目のスイッチ：Redo
* 左から8番目のスイッチ：取り消し

## Usage
### スイッチを押す。ただそれだけです。

## License
#### [MIT]https://github.com/KunNishii/ShortcutKeyboard/blob/main/LICENSE
