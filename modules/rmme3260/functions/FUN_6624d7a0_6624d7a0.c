/* Module: rmme3260.dll
   Function: FUN_6624d7a0
   Address: 6624d7a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_6624d7a0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  int *piVar2;
  int local_70 [18];
  uint local_28 [8];
  undefined4 local_8;
  
  if (((*(uint *)(&DAT_66270568 + param_2 * 4) & 4) != 0) &&
     ((*(uint *)(&DAT_66270568 + param_2 * 4) & 2) == param_5)) {
    piVar2 = local_70;
    for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar2 = 0;
      piVar2 = piVar2 + 1;
    }
    local_70[2] = *(int *)(param_1 + 0xc);
    local_8 = param_4;
    local_70[3] = *(int *)(param_1 + 8);
    local_70[0] = 0x6c;
    if ((*(int *)(param_1 + 0x43c) != 0) && ((*(byte *)(param_1 + 0x448) & 0x10) == 0)) {
      local_70[3] = local_70[3] * 2;
      local_70[2] = local_70[2] * 2;
    }
    local_70[1] = 0x1007;
    local_28[0] = 0x20;
    FUN_6624f9c0(local_28,param_2);
    iVar1 = (**(code **)(**(int **)(param_1 + 0x8ac) + 0x18))
                      (*(int **)(param_1 + 0x8ac),local_70,param_1 + 0x8b4,0);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x8c0) = param_3;
      return 1;
    }
  }
  return 0;
}


