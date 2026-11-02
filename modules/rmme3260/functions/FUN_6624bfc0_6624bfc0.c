/* Module: rmme3260.dll
   Function: FUN_6624bfc0
   Address: 6624bfc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6624bfc0(uint *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = param_1;
  if (((*param_1 & 1) != 0) && ((*param_1 & 0x100) != 0)) {
    iVar3 = (**(code **)(*(int *)param_1[0x2da] + 0x3c))((int *)param_1[0x2da],&param_1);
    uVar2 = param_2;
    if (iVar3 == 0) {
      (**(code **)(*param_1 + 0x20))(param_1,0,param_2);
      puVar1[2] = uVar2;
      return 0;
    }
  }
  return 0x80004005;
}


