/* Module: vidcap30.exe
   Function: FUN_0056e480
   Address: 0056e480
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_0056e480(int param_1,LPCSTR param_2,int param_3,undefined4 param_4,int param_5,int param_6)

{
  LPCSTR pCVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  pCVar1 = param_2;
  lstrcpynA((LPSTR)&param_2,param_2,3);
  param_2._0_3_ = (uint3)(ushort)param_2;
  FUN_00575110(&param_2,3);
  FUN_00575e70(pCVar1 + 2,local_48);
  if (param_3 == 1) {
    uVar2 = _SfSpike2GetMachineCode_4(param_4);
    if (param_5 != 0) {
      uVar3 = FUN_00575110(param_5,3);
      uVar2 = uVar2 ^ uVar3;
    }
  }
  else {
    uVar2 = 0x9e486eaf;
  }
  FUN_00577210(local_54,uVar2);
  iVar4 = FUN_00577230(local_54,local_48,local_18,local_30,param_1 + 0x58,param_1 + 0x3c);
  if (iVar4 != 0) {
    FUN_00577300(local_18,local_30,local_3c,param_1 + 0x3c);
    if (param_6 != 0) {
      FUN_005770e0(local_3c);
      return 0;
    }
    return 0x80070005;
  }
  return 0x80070005;
}


