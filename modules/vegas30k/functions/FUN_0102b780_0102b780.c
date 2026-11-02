/* Module: vegas30k.dll
   Function: FUN_0102b780
   Address: 0102b780
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0102b780(int param_1,undefined4 *param_2,int *param_3)

{
  uchar *puVar1;
  int iVar2;
  HRESULT HVar3;
  
  *param_3 = 0;
  *param_2 = 0;
  puVar1 = _mbsstr((uchar *)(param_1 + 0x20),(uchar *)"Sonic Foundry");
  if ((puVar1 == (uchar *)0x0) && (iVar2 = FUN_0102b800(param_1 + 0x10), iVar2 == 0)) {
    return 0;
  }
  param_3 = (int *)0x0;
  HVar3 = CoCreateInstance((IID *)(param_1 + 0x10),(LPUNKNOWN)0x0,5,(IID *)&DAT_011da7b0,&param_3);
  if (HVar3 < 0) {
    return 0;
  }
  (**(code **)(*param_3 + 8))(param_3);
  return 1;
}


