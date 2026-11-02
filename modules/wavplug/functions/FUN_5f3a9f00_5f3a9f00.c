/* Module: wavplug.dll
   Function: FUN_5f3a9f00
   Address: 5f3a9f00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_5f3a9f00(HANDLE param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  uVar1 = param_2 & 7;
  iVar2 = param_3;
  if (uVar1 != 0) {
    bVar3 = CARRY4(param_2,8 - uVar1);
    param_2 = param_2 + (8 - uVar1);
    iVar2 = (param_3 - (uint)(8 < uVar1)) + (uint)bVar3;
  }
  param_3 = iVar2;
  SetFilePointer(param_1,param_2,&param_3,1);
  return CONCAT44(iVar2,param_2);
}


