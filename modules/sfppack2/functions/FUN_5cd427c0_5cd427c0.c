/* Module: sfppack2.dll
   Function: FUN_5cd427c0
   Address: 5cd427c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_5cd427c0(void *this,LPCSTR param_1,int param_2,undefined4 param_3,char *param_4,void *param_5)

{
  LPCSTR pCVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_54 [3];
  uint local_48 [3];
  uint local_3c [3];
  uint local_30 [6];
  undefined4 local_18 [6];
  
  pCVar1 = param_1;
  lstrcpynA((LPSTR)&param_1,param_1,3);
  param_1._0_3_ = (uint3)(ushort)param_1;
  FUN_5cd4abb0((char *)&param_1);
  FUN_5cd498f0(pCVar1 + 2,local_48);
  if (param_2 == 1) {
    uVar2 = FUN_5cd4a6f0();
    if (param_4 != (char *)0x0) {
      uVar3 = FUN_5cd4abb0(param_4);
      uVar2 = uVar2 ^ uVar3;
    }
  }
  else {
    uVar2 = 0x9e486eaf;
  }
  FUN_5cd4afc0(local_54,uVar2);
  iVar4 = FUN_5cd4afe0((int)local_54,local_48,local_18,local_30,(uint *)((int)this + 0x58),
                       (uint *)((int)this + 0x3c));
  if (iVar4 != 0) {
    FUN_5cd4b0b0((int)local_18,local_30,local_3c,(uint *)((int)this + 0x3c));
    if (param_5 != (void *)0x0) {
      FUN_5cd4ae90(param_5,(int)local_3c);
      return 0;
    }
    return 0x80070005;
  }
  return 0x80070005;
}


