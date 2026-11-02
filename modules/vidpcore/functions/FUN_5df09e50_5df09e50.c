/* Module: vidpcore.dll
   Function: FUN_5df09e50
   Address: 5df09e50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_5df09e50(undefined4 *param_1,int param_2,int param_3,uchar *param_4,undefined4 *param_5,
            int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10,
            undefined4 param_11,uchar *param_12,uchar *param_13)

{
  undefined4 *puVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  uchar *_Source;
  
  puVar1 = param_5;
  *param_1 = 0;
  puVar4 = param_1;
  for (iVar3 = 8; puVar4 = puVar4 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
  }
  param_1[0xc] = param_2;
  param_1[0xd] = param_3;
  param_1[0xf] = *param_5;
  FUN_5df10b20(param_5 + 1,param_1 + 0x10);
  FUN_5df10b20(puVar1 + 4,param_1 + 0x13);
  iVar3 = param_6;
  FUN_5df10b20(param_6,param_1 + 0x16);
  FUN_5df10b20(iVar3 + 0xc,param_1 + 0x19);
  param_1[0xe] = param_7;
  param_1[0xb] = param_8;
  param_1[0x19e] = param_9;
  DVar2 = GetTickCount();
  param_1[10] = DVar2;
  *(undefined1 *)(param_1 + 0x1e3) = 0;
  *(undefined1 *)((int)param_1 + 0x797) = 0;
  param_1[0x19f] = 0;
  iVar3 = FUN_5df0b220(&param_3);
  if ((-1 < iVar3) && (FUN_5df11990(&param_2), param_2 == param_3)) {
    param_1[0x19f] = 1;
  }
  param_1[0x1a0] = 0;
  param_1[0x1a1] = 1;
  param_1[0x1f8] = 0;
  param_1[0x200] = param_10;
  if (param_10 == 1) {
    _mbscpy((uchar *)(param_1 + 0x201),(uchar *)"Beta Configuration");
    pcVar5 = "Beta Options";
  }
  else {
    _mbscpy((uchar *)(param_1 + 0x201),(uchar *)"Final Configuration");
    pcVar5 = "Final Options";
  }
  _mbscpy((uchar *)(param_1 + 0x281),(uchar *)pcVar5);
  pcVar5 = (char *)param_13;
  if (param_13 == (uchar *)0x0) {
    pcVar5 = "Software\\Sonic Foundry\\";
  }
  if (param_1[0x200] == 1) {
    param_1[0x301] = 1;
  }
  else {
    param_1[0x301] = param_11;
  }
  param_1[0x1f9] = 0;
  _mbscpy((uchar *)(param_1 + 0xdd),param_4);
  _mbscpy((uchar *)(param_1 + 0x9c),(uchar *)pcVar5);
  _mbscpy((uchar *)(param_1 + 0x1c),(uchar *)pcVar5);
  _mbscat((uchar *)(param_1 + 0x1c),param_4);
  _mbscpy((uchar *)(param_1 + 0x11e),(uchar *)pcVar5);
  _mbscat((uchar *)(param_1 + 0x11e),(uchar *)"Shared Information\\Bundled Activations");
  _Source = param_12;
  if (param_12 == (uchar *)0x0) {
    _Source = "NONE";
  }
  _mbscpy((uchar *)(param_1 + 0x1a2),_Source);
  *(undefined2 *)(param_1 + 0x1fa) = 0xffff;
  *(undefined2 *)(param_1 + 0x1fe) = 0xffff;
  param_1[499] = 0xffff;
  param_1[0x1fb] = 0;
  param_1[0x1fd] = 0;
  param_1[0x1fc] = 0;
  param_1[0x1ff] = 0;
  return param_1;
}


