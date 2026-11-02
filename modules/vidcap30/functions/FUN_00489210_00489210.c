/* Module: vidcap30.exe
   Function: FUN_00489210
   Address: 00489210
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00489210(undefined4 *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_EBX;
  int *unaff_EBP;
  int *unaff_ESI;
  int *piVar6;
  int unaff_EDI;
  bool bVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *local_638;
  int local_634 [2];
  undefined4 local_62c;
  CHAR aCStack_624 [259];
  undefined1 uStack_521;
  CHAR aCStack_520 [259];
  undefined1 uStack_41d;
  WCHAR aWStack_41c [260];
  WCHAR aWStack_214 [252];
  int iStack_1c;
  int iStack_8;
  
  if (*(int *)(param_2 + 0x2e0) != 0) {
    return (undefined4 *)0x0;
  }
  local_638 = (undefined4 *)0x0;
  local_634[0] = 0;
  puVar2 = (undefined4 *)
           FUN_00488880(param_2,DAT_00585fa0,DAT_00585fa4,DAT_00585fa8,DAT_00585fac,&local_638);
  if ((int)puVar2 < 0) goto LAB_004894d9;
  if (local_638 != (undefined4 *)0x0) {
    piVar1 = (int *)(param_2 + 0x2c8);
    local_62c = FUN_00488420(local_638,piVar1);
    piVar6 = local_634;
    piVar9 = &DAT_005a5aa8;
    puVar2 = (undefined4 *)(**(code **)*local_638)(local_638);
    if (-1 < (int)puVar2) {
      piVar8 = (int *)&stack0xfffff9c4;
      puVar2 = (undefined4 *)(**(code **)*param_1)(param_1,&DAT_005860d0);
      if (-1 < (int)puVar2) {
        puVar3 = (undefined4 *)(**(code **)(*piVar9 + 0x14))(piVar9,unaff_EDI);
        (**(code **)(*piVar9 + 8))(piVar9);
        puVar2 = puVar3;
        if (-1 < (int)puVar3) {
          (**(code **)(*piVar9 + 0x18))(piVar9,&stack0xfffff9c0);
          iVar5 = 4;
          bVar7 = true;
          piVar6 = (int *)&stack0xfffff9b8;
          piVar9 = piVar1;
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            bVar7 = *piVar6 == *piVar9;
            piVar6 = piVar6 + 1;
            piVar9 = piVar9 + 1;
          } while (bVar7);
          if (!bVar7) {
            *(undefined4 *)(iStack_1c + 0x24c) = 1;
          }
          *piVar1 = unaff_EDI;
          *(int **)(param_2 + 0x2cc) = unaff_ESI;
          *(int **)(param_2 + 0x2d0) = unaff_EBP;
          *(undefined4 *)(param_2 + 0x2d4) = unaff_EBX;
          (**(code **)(*piVar8 + 0xc))(piVar8,*(undefined4 *)(iStack_1c + 0x2d8));
          if (((*(int *)(iStack_1c + 0x2e4) == 0) || (*(int *)(iStack_1c + 0x224) == 0)) &&
             (puVar3 = (undefined4 *)
                       (**(code **)(*unaff_ESI + 0x2c))
                                 (unaff_ESI,0,0,aWStack_41c,0x104,aWStack_214,0x104),
             -1 < (int)puVar3)) {
            *(undefined4 *)(iStack_1c + 0x24c) = 1;
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
            if (*(void **)(iStack_1c + 0x2e4) != (void *)0x0) {
              free(*(void **)(iStack_1c + 0x2e4));
            }
            uVar4 = FUN_004889d0(aCStack_520);
            *(undefined4 *)(iStack_1c + 0x2e4) = uVar4;
            if (*(void **)(iStack_1c + 0x224) != (void *)0x0) {
              free(*(void **)(iStack_1c + 0x224));
            }
            uVar4 = FUN_004889d0(aCStack_624);
            *(undefined4 *)(iStack_1c + 0x224) = uVar4;
          }
          puVar2 = local_638;
          if ((int)local_638 < 0) {
            (**(code **)(*unaff_EBP + 8))(unaff_EBP);
            param_2 = iStack_8;
          }
          else {
            *(undefined4 *)(iStack_1c + 0x2e0) = 1;
            *(int **)(iStack_1c + 0x2dc) = unaff_EBP;
            puVar2 = puVar3;
            param_2 = iStack_8;
          }
          goto LAB_004894cb;
        }
      }
      (**(code **)(*piVar6 + 8))(piVar6);
    }
LAB_004894cb:
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  if (-1 < (int)puVar2) {
    return puVar2;
  }
LAB_004894d9:
  *(undefined4 *)(param_2 + 0x2e0) = 2;
  return puVar2;
}


