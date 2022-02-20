/*
*shortcut keyboardの作成
*
*ショートカットの設定
*左から1番目のスイッチ：検索
*左から2番目のスイッチ：全選択
*左から3番目のスイッチ：保存
*左から4番目のスイッチ：ペースト
*左から5番目のスイッチ：コピー
*左から6番目のスイッチ：切り取り
*左から7番目のスイッチ：Redo
*左から8番目のスイッチ：取り消し
*
*/

// cmdキーの定義
#define shortcutKey KEY_LEFT_GUI
#define shiftKey KEY_RIGHT_SHIFT 

// ライブラリをインクルード
#include <Keyboard.h>
#include <avdweb_Switch.h>

// スイッチのピン番号指定
#define SWITCH_1 7  //左から1番目のスイッチ
#define SWITCH_2 3  //左から2番目のスイッチ
#define SWITCH_3 21 //左から3番目のスイッチ
#define SWITCH_4 12 //左から4番目のスイッチ
#define SWITCH_5 20 //左から5番目のスイッチ
#define SWITCH_6 2  //左から6番目のスイッチ
#define SWITCH_7 19 //左から7番目のスイッチ
#define SWITCH_8 23 //左から8番目のスイッチ

// スイッチクラスのインスタンスを生成
Switch switch_1(SWITCH_1);
Switch switch_2(SWITCH_2);
Switch switch_3(SWITCH_3);
Switch switch_4(SWITCH_4);
Switch switch_5(SWITCH_5);
Switch switch_6(SWITCH_6);
Switch switch_7(SWITCH_7);
Switch switch_8(SWITCH_8);



void setup() {
  // キーボードの接続処理
  Keyboard.begin();

  // スイッチ接続ピンの設定
  pinMode(SWITCH_1, INPUT_PULLUP);
  pinMode(SWITCH_2, INPUT_PULLUP);
  pinMode(SWITCH_3, INPUT_PULLUP);
  pinMode(SWITCH_4, INPUT_PULLUP);
  pinMode(SWITCH_5, INPUT_PULLUP);
  pinMode(SWITCH_6, INPUT_PULLUP);
  pinMode(SWITCH_7, INPUT_PULLUP);
  pinMode(SWITCH_8, INPUT_PULLUP);

}

void loop() {
  switch_1.poll();

  if( switch_1.pushed() ){
  Keyboard.press( shortcutKey );
  Keyboard.press('f');
  delay(100);
  Keyboard.releaseAll();
  }

  switch_2.poll();

  if( switch_2.pushed() ){
  Keyboard.press( shortcutKey );
  Keyboard.press('a');
  delay(100);
  Keyboard.releaseAll();
  }

  switch_3.poll();

  if( switch_3.pushed() ){
  Keyboard.press( shortcutKey );
  Keyboard.press('s');
  delay(100);
  Keyboard.releaseAll();
  }

  switch_4.poll();

  if( switch_4.pushed() ){
  Keyboard.press( shortcutKey );
  Keyboard.press('v');
  delay(100);
  Keyboard.releaseAll();
  }

  switch_5.poll();

  if( switch_5.pushed() ){
  Keyboard.press( shortcutKey );
  Keyboard.press('c');
  delay(100);
  Keyboard.releaseAll();
  }

  switch_6.poll();

  if( switch_6.pushed() ){
  Keyboard.press( shortcutKey );
  Keyboard.press('x');
  delay(100);
  Keyboard.releaseAll();
  }

  switch_7.poll();
  
  if( switch_7.pushed() ){
  Keyboard.press( shortcutKey );
  Keyboard.press( shiftKey );
  Keyboard.press('z');
  delay(100);
  Keyboard.releaseAll();
  }

  switch_8.poll();

  if( switch_8.pushed() ){
  Keyboard.press( shortcutKey);
  Keyboard.press('z');
  delay(100);
  Keyboard.releaseAll();
  }

}
