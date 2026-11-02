/* Module: vegas30k.dll
   Function: FUN_01043a30
   Address: 01043a30
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_01043a30(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_EBP;
  int *unaff_ESI;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  undefined4 *local_638;
  int local_634 [4];
  CHAR aCStack_624 [259];
  undefined1 uStack_521;
  CHAR aCStack_520 [259];
  undefined1 uStack_41d;
  WCHAR aWStack_41c [260];
  WCHAR aWStack_214 [266];
  
  piVar1 = (int *)0x0;
  if (*(int *)(param_1 + 0x31c) == 0) {
    local_634[0] = 0;
    local_638 = (undefined4 *)0x0;
    piVar1 = (int *)FUN_010434f0(param_1,DAT_011da1a0,DAT_011da1a4,DAT_011da1a8,DAT_011da1ac,
                                 &local_638);
    if (-1 < (int)piVar1) {
      if (local_638 != (undefined4 *)0x0) {
        piVar1 = (int *)(param_1 + 0x304);
        local_634[2] = FUN_01043090(local_638,piVar1);
        iVar2 = (**(code **)*local_638)(local_638,&DAT_011dab80,local_634);
        if (-1 < iVar2) {
          (**(code **)(*unaff_ESI + 0x14))(unaff_ESI,local_634);
          iVar2 = 4;
          bVar6 = true;
          piVar4 = local_634;
          piVar5 = piVar1;
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            bVar6 = *piVar4 == *piVar5;
            piVar4 = piVar4 + 1;
            piVar5 = piVar5 + 1;
          } while (bVar6);
          if (!bVar6) {
            *(undefined4 *)(param_1 + 0x24c) = 1;
          }
          *piVar1 = local_634[0];
          *(int *)(param_1 + 0x308) = local_634[1];
          *(int *)(param_1 + 0x30c) = local_634[2];
          *(int *)(param_1 + 0x310) = local_634[3];
          if (((*(int *)(param_1 + 800) == 0) || (*(int *)(param_1 + 0x224) == 0)) &&
             (iVar2 = (**(code **)(*unaff_ESI + 0x18))
                                (unaff_ESI,0,0,aWStack_41c,0x104,0,0,aWStack_214,0x104), -1 < iVar2)
             ) {
            *(undefined4 *)(param_1 + 0x24c) = 1;
            if ((&stack0x00000000 == (undefined1 *)0x41c) || (aWStack_41c[0] != L'\0')) {
              WideCharToMultiByte(0,0,aWStack_41c,-1,aCStack_520,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
            }
            else if (&stack0x00000000 != (undefined1 *)0x520) {
              aCStack_520[0] = '\0';
            }
            uStack_41d = 0;
            if ((&stack0x00000000 == (undefined1 *)0x214) || (aWStack_214[0] != L'\0')) {
              WideCharToMultiByte(0,0,aWStack_214,-1,aCStack_624,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
            }
            else if (&stack0x00000000 != (undefined1 *)0x624) {
              aCStack_624[0] = '\0';
            }
            uStack_521 = 0;
            if (*(void **)(param_1 + 800) != (void *)0x0) {
              free(*(void **)(param_1 + 800));
            }
            uVar3 = FUN_01043640(aCStack_520);
            *(undefined4 *)(param_1 + 800) = uVar3;
            if (*(void **)(param_1 + 0x224) != (void *)0x0) {
              free(*(void **)(param_1 + 0x224));
            }
            uVar3 = FUN_01043640(aCStack_624);
            *(undefined4 *)(param_1 + 0x224) = uVar3;
          }
          if ((int)local_638 < 0) {
            (**(code **)(*unaff_EBP + 8))(unaff_EBP);
          }
          else {
            *(undefined4 *)(param_1 + 0x31c) = 1;
            *(int **)(param_1 + 0x318) = unaff_EBP;
          }
        }
        (**(code **)(*unaff_ESI + 8))(unaff_ESI);
        piVar1 = unaff_EBP;
      }
      if (-1 < (int)piVar1) {
        return piVar1;
      }
    }
    *(undefined4 *)(param_1 + 0x31c) = 2;
  }
  return piVar1;
}


