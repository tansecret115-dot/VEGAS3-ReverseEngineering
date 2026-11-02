/* Module: sfpaplug.dll
   Function: FUN_00411100
   Address: 00411100
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00411100(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int iVar4;
  int iStack_224;
  undefined4 local_220;
  undefined4 uStack_21c;
  wchar_t awStack_218 [268];
  
  piVar1 = (int *)(param_1 + 0xc);
  FUN_00410e80(*(int **)(param_1 + 0xc));
  *piVar1 = 0;
  if (*(int *)(param_1 + 0x24) == 0) {
    return 0;
  }
  iVar3 = FUN_0042baa0(piVar1,4,-1,-1,0x80000002);
  if (-1 < iVar3) {
    (**(code **)(**(int **)(param_1 + 0x24) + 0x18))(*(int **)(param_1 + 0x24),&local_220);
    if ((unaff_EBX != 0) && (unaff_EBP = 0, 0 < unaff_EBX)) {
      do {
        iVar3 = (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))
                          (*(int **)(param_1 + 0x24),unaff_EBP,&local_220);
        if (-1 < iVar3) {
          iVar3 = FUN_0042b770((int *)*piVar1,(int *)0x0,0x226,-1,&iStack_224);
          if ((-1 < iVar3) &&
             (puVar2 = *(undefined4 **)(*(int *)(*piVar1 + 8) + iStack_224 * 4),
             puVar2 != (undefined4 *)0x0)) {
            *puVar2 = 0x1c;
            puVar2[1] = local_220;
            puVar2[3] = 0;
            puVar2[2] = uStack_21c;
            puVar2[4] = 0;
            puVar2[5] = 0;
            puVar2[6] = 0x20a;
            wcsncpy((wchar_t *)(puVar2 + 7),awStack_218,0x105);
          }
        }
        unaff_EBP = unaff_EBP + 1;
      } while (unaff_EBP < unaff_EBX);
    }
    (**(code **)(**(int **)(param_1 + 0x24) + 0x20))(*(int **)(param_1 + 0x24),&stack0xfffffdd8);
    if ((unaff_ESI != 0) && (iVar4 = 0, 0 < unaff_ESI)) {
      do {
        iVar3 = (**(code **)(**(int **)(param_1 + 0x24) + 0x24))
                          (*(int **)(param_1 + 0x24),iVar4,&stack0xfffffdd8);
        if (-1 < iVar3) {
          iVar3 = FUN_0042b770((int *)*piVar1,(int *)0x0,0x226,-1,(int *)&stack0xfffffdd4);
          if ((-1 < iVar3) &&
             (puVar2 = *(undefined4 **)(*(int *)(*piVar1 + 8) + unaff_EBP * 4),
             puVar2 != (undefined4 *)0x0)) {
            *puVar2 = 0x1c;
            puVar2[1] = unaff_EBX;
            puVar2[2] = iStack_224;
            puVar2[3] = local_220;
            puVar2[4] = uStack_21c;
            puVar2[5] = 1;
            puVar2[6] = 0x20a;
            wcsncpy((wchar_t *)(puVar2 + 7),awStack_218,0x105);
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < unaff_ESI);
    }
  }
  return iVar3;
}


