/* Module: mp3plug.dll
   Function: FUN_5f6daaa0
   Address: 5f6daaa0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5f6dac23) */
/* WARNING: Removing unreachable block (ram,0x5f6dac1e) */
/* WARNING: Removing unreachable block (ram,0x5f6dac4f) */
/* WARNING: Removing unreachable block (ram,0x5f6dac40) */

int * __cdecl FUN_5f6daaa0(undefined4 param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  piVar1 = (int *)FUN_5f6d9760(0x36a4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)param_2;
    piVar1[1] = *param_2;
    iVar4 = param_2[1];
    piVar1[0xd] = 1;
    piVar1[2] = iVar4;
    FUN_5f6de860(&DAT_5f75c2b0,1,0,3,0x5f75cc30,s_0___ALL_DISTORTED_1_WORST_DISTOR_5f75cc40,
                 piVar1 + 0xd);
    piVar1[0xf] = 1;
    FUN_5f6e0300(&DAT_5f75c2a0,0x5f75cca0,s_after_last_loop_run__perform_a_f_5f75ccc0,piVar1 + 0xf);
    piVar1[0xe] = 400;
    puVar7 = (undefined4 *)0x1;
    FUN_5f6de860(&DAT_5f75c2d0,1,1,1000,0x5f75cd00,s_The_maximum_number_of_outer_loop_5f75cd10,
                 piVar1 + 0xe);
    iVar4 = piVar1[2];
    iVar6 = 0;
    if (0 < iVar4) {
      iVar3 = piVar1[1];
      do {
        if (0 < iVar3) {
          iVar4 = 0;
          iVar5 = 0;
          do {
            puVar2 = FUN_5f6e81c0(*(undefined4 *)(*piVar1 + 0x20),puVar7);
            iVar5 = iVar5 + 1;
            *(undefined4 **)((int)piVar1 + iVar4 + iVar6 * 8 + 0x24) = puVar2;
            iVar3 = piVar1[1];
            iVar4 = iVar4 + 4;
          } while (iVar5 < iVar3);
          iVar4 = piVar1[2];
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
    }
    FUN_5f6de860(&DAT_5f75cd50,1,0,4,0x5f75cd60,"",(long *)&stack0xfffffff0);
    piVar1[3] = 1;
    piVar1[4] = piVar1[1];
    return piVar1;
  }
  return (int *)0x0;
}


