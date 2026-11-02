/* Module: vegas30.exe
   Function: FUN_00588980
   Address: 00588980
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00588980(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_c;
  
  local_c = *(int *)(param_1 + 0x30);
  if (local_c != 0) {
    piVar2 = *(int **)(param_1 + 0x10);
    iVar5 = 0;
    if (0 < piVar2[1]) {
      do {
        iVar4 = 0;
        iVar1 = *(int *)(*(int *)(*piVar2 + iVar5 * 4) + 0xc);
        if (0 < iVar1) {
          do {
            piVar2 = (int *)FUN_005880e0(iVar4);
            if (piVar2 == (int *)0x0) break;
            iVar3 = FUN_005880c0(piVar2);
            (**(code **)(*piVar2 + 0x18))(local_c,iVar3);
            FUN_00588100(piVar2);
            local_c = local_c + iVar3;
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar1);
        }
        piVar2 = *(int **)(param_1 + 0x10);
        iVar5 = iVar5 + 1;
      } while (iVar5 < piVar2[1]);
    }
  }
  return;
}


