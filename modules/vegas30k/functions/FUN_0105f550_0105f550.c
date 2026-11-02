/* Module: vegas30k.dll
   Function: FUN_0105f550
   Address: 0105f550
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_0105f550(undefined4 *param_1,int *param_2,int param_3,undefined4 param_4,uchar *param_5,
            int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10
            ,undefined4 param_11,uint param_12)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  DWORD DVar4;
  
  *param_1 = &PTR_LAB_011e1d40;
  param_1[1] = 1;
  param_1[0xd] = param_3;
  param_1[2] = param_12;
  param_1[6] = param_12 & 1;
  if (((param_12 & 1) == 0) || ((param_12 & 0x10) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  param_1[7] = uVar1;
  uVar2 = param_12 >> 1 & 1;
  param_1[8] = uVar2;
  if ((uVar2 == 0) || ((param_12 & 8) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  param_1[9] = uVar1;
  param_1[0x90] = param_10;
  param_1[0x91] = param_11;
  param_1[5] = -((int)param_12 >> 0x1f);
  param_1[0x93] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xc] = (uint)(param_3 == 0);
  if ((param_6 == 0) && (-((int)param_12 >> 0x1f) == 0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = 1;
  }
  param_1[3] = iVar3;
  if (iVar3 != 0) goto LAB_0105f656;
  if ((param_5 == (uchar *)0x0) || (*param_5 == '\0')) {
    DVar4 = GetTempPathA(0x104,(LPSTR)(param_1 + 0x4f));
    if (DVar4 == 0) {
      param_5 = "C:\\";
      goto LAB_0105f63c;
    }
  }
  else {
LAB_0105f63c:
    _mbscpy((uchar *)(param_1 + 0x4f),param_5);
  }
  _SfAddSlashToPathName_8(param_1 + 0x4f,0x104);
LAB_0105f656:
  param_1[0xb] = 1;
  param_1[10] = 1;
  param_1[0x96] = 0xffffffff;
  iVar3 = FUN_0105fba0(param_4,param_6,param_7,param_8,param_9);
  *param_2 = iVar3;
  if (-1 < iVar3) {
    (**(code **)(*(int *)param_1[0xd] + 0x14))();
  }
  return param_1;
}


