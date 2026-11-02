/* Module: wavplug.dll
   Function: FUN_5f3bbb60
   Address: 5f3bbb60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_5f3bbb60(void *this,int param_1,HKEY__ param_2,uchar *param_3,undefined4 *param_4,int param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,undefined4 param_10
            ,uchar *param_11,uchar *param_12)

{
  DWORD DVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  char *_Source;
  
  *(undefined4 *)this = 0;
  puVar4 = this;
  for (iVar3 = 8; puVar4 = puVar4 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
  }
  *(int *)((int)this + 0x30) = param_1;
  *(int *)((int)this + 0x34) = param_2.unused;
  *(undefined4 *)((int)this + 0x3c) = *param_4;
  FUN_5f3c2b30((int)(param_4 + 1),(undefined4 *)((int)this + 0x40));
  FUN_5f3c2b30((int)(param_4 + 4),(undefined4 *)((int)this + 0x4c));
  FUN_5f3c2b30(param_5,(undefined4 *)((int)this + 0x58));
  FUN_5f3c2b30(param_5 + 0xc,(undefined4 *)((int)this + 100));
  *(undefined4 *)((int)this + 0x38) = param_6;
  *(undefined4 *)((int)this + 0x2c) = param_7;
  *(undefined4 *)((int)this + 0x678) = param_8;
  DVar1 = GetTickCount();
  *(DWORD *)((int)this + 0x28) = DVar1;
  *(undefined1 *)((int)this + 0x78c) = 0;
  *(undefined1 *)((int)this + 0x797) = 0;
  *(undefined4 *)((int)this + 0x67c) = 0;
  uVar2 = FUN_5f3bcf30(this,&param_2);
  if ((-1 < (int)uVar2) && (FUN_5f3c39a0(&param_1), param_1 == param_2.unused)) {
    *(undefined4 *)((int)this + 0x67c) = 1;
  }
  *(undefined4 *)((int)this + 0x680) = 0;
  *(undefined4 *)((int)this + 0x684) = 1;
  *(undefined4 *)((int)this + 0x7e0) = 0;
  *(int *)((int)this + 0x800) = param_9;
  if (param_9 == 1) {
    _mbscpy((uchar *)((int)this + 0x804),(uchar *)"Beta Configuration");
    _Source = "Beta Options";
  }
  else {
    _mbscpy((uchar *)((int)this + 0x804),(uchar *)"Final Configuration");
    _Source = "Final Options";
  }
  _mbscpy((uchar *)((int)this + 0xa04),(uchar *)_Source);
  if (param_12 == (uchar *)0x0) {
    param_12 = (uchar *)"Software\\Sonic Foundry\\";
  }
  if (*(int *)((int)this + 0x800) == 1) {
    *(undefined4 *)((int)this + 0xc04) = 1;
  }
  else {
    *(undefined4 *)((int)this + 0xc04) = param_10;
  }
  *(undefined4 *)((int)this + 0x7e4) = 0;
  _mbscpy((uchar *)((int)this + 0x374),param_3);
  _mbscpy((uchar *)((int)this + 0x270),param_12);
  _mbscpy((uchar *)((int)this + 0x70),param_12);
  _mbscat((uchar *)((int)this + 0x70),param_3);
  _mbscpy((uchar *)((int)this + 0x478),param_12);
  _mbscat((uchar *)((int)this + 0x478),(uchar *)"Shared Information\\Bundled Activations");
  if (param_11 == (uchar *)0x0) {
    param_11 = "NONE";
  }
  _mbscpy((uchar *)((int)this + 0x688),param_11);
  *(undefined2 *)((int)this + 0x7e8) = 0xffff;
  *(undefined2 *)((int)this + 0x7f8) = 0xffff;
  *(undefined4 *)((int)this + 0x7cc) = 0xffff;
  *(undefined4 *)((int)this + 0x7ec) = 0;
  *(undefined4 *)((int)this + 0x7f4) = 0;
  *(undefined4 *)((int)this + 0x7f0) = 0;
  *(undefined4 *)((int)this + 0x7fc) = 0;
  return this;
}


