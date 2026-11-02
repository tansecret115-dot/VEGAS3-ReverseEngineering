/* Module: erv13260.dll
   Function: FUN_635f5640
   Address: 635f5640
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_635f5640(undefined2 *param_1,ushort *param_2,int *param_3)

{
  int *piVar1;
  undefined2 *puVar2;
  ushort *puVar3;
  bool bVar4;
  undefined3 extraout_var;
  
  puVar3 = param_2;
  puVar2 = param_1;
  piVar1 = *(int **)(param_2 + (uint)*param_2 * 2 + 0x25a);
  if (DAT_63606d0c == 1) {
    *(undefined4 *)(param_1 + 0x4b3) = 1;
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = 0;
    DAT_63606d0c = 0;
    DAT_63623340 = piVar1;
    return 0;
  }
  *(undefined4 *)(param_1 + (uint)*param_2 * 2 + 0x4b3) = 0;
  bVar4 = FUN_635f6950(piVar1,DAT_63623340,(int *)&param_2,(int *)&param_1,param_3);
  if (CONCAT31(extraout_var,bVar4) == 1) {
    *(undefined4 *)(puVar2 + (uint)*puVar3 * 2 + 0x4b3) = 1;
    puVar2[*puVar3 + 0x70b] = 0;
  }
  *(undefined2 **)(puVar2 + (uint)*puVar3 * 2 + 0x25b) = param_1;
  *(ushort **)(puVar2 + (uint)*puVar3 * 2 + 3) = param_2;
  if ((*(int *)(puVar2 + 1) == 0) && (*puVar3 == 299)) {
    *(undefined4 *)(puVar2 + 1) = 1;
  }
  DAT_63623340 = piVar1;
  return 0;
}


