/* Module: mp3plug.dll
   Function: FUN_5f704d70
   Address: 5f704d70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined ** __cdecl FUN_5f704d70(undefined4 *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  int iVar5;
  int iVar6;
  
  *param_1 = 0;
  if ((param_2 != 0) && (param_3 != (int *)0x0)) {
    puVar3 = FUN_5f6d9720(0x3bc,1);
    *param_1 = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      ppuVar4 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f760380,(char *)0x53,
                             (undefined *)0x0,s_out_of_memory_5f75c330);
      return ppuVar4;
    }
    iVar5 = 0;
    puVar3[0xee] = *(undefined4 *)(*(int *)(param_2 + 0x1c) + 0x1d8);
    *puVar3 = *(undefined4 *)(*(int *)(param_2 + 0x20) + 4);
    puVar3[1] = *(int *)(param_2 + 0x20) + 0xc;
    puVar3[2] = *(int *)(param_2 + 0x20) + 100;
    iVar1 = *(int *)(param_2 + 8);
    puVar3[0xeb] = iVar1;
    iVar2 = **(int **)(param_2 + 0x20);
    puVar3[0xec] = iVar2;
    iVar6 = 0;
    puVar3[0xed] = (float)iVar1 / (float)iVar2;
    puVar3[3] = *param_3;
    if (0 < *param_3) {
      do {
        iVar1 = param_3[iVar6 + 5];
        puVar3[iVar6 + 4] = iVar5;
        puVar3[iVar6 + 0x78] = iVar1;
        iVar5 = iVar5 + iVar1;
        iVar6 = iVar6 + 1;
      } while (iVar6 < *param_3);
    }
    puVar3[puVar3[3] + 4] = iVar5;
    return (undefined **)0x0;
  }
  ppuVar4 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f760380,(char *)0x4d,(undefined *)0x0,
                         s_invalid_function_parameters_5f760350);
  return ppuVar4;
}


