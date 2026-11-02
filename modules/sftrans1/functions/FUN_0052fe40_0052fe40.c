/* Module: sftrans1.dll
   Function: FUN_0052fe40
   Address: 0052fe40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_0052fe40(int param_1,LPCSTR param_2,int param_3,undefined4 param_4,int param_5,int param_6)

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
  FUN_00538200(&param_2,3);
  FUN_00536f40(pCVar1 + 2,local_48);
  if (param_3 == 1) {
    uVar2 = FUN_00537d40(param_4);
    if (param_5 != 0) {
      uVar3 = FUN_00538200(param_5,3);
      uVar2 = uVar2 ^ uVar3;
    }
  }
  else {
    uVar2 = 0x9e486eaf;
  }
  FUN_00538610(local_54,uVar2);
  iVar4 = FUN_00538630(local_54,local_48,local_18,local_30,param_1 + 0x58,param_1 + 0x3c);
  if (iVar4 != 0) {
    FUN_00538700(local_18,local_30,local_3c,param_1 + 0x3c);
    if (param_6 != 0) {
      FUN_005384e0(local_3c);
      return 0;
    }
    return 0x80070005;
  }
  return 0x80070005;
}


