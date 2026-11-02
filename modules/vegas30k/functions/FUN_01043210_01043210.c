/* Module: vegas30k.dll
   Function: FUN_01043210
   Address: 01043210
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_01043210(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_EBX;
  int *unaff_EBP;
  int *unaff_ESI;
  int *piVar5;
  undefined4 unaff_EDI;
  bool bVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *local_638;
  int local_634 [2];
  undefined4 local_62c;
  undefined1 uStack_535;
  CHAR aCStack_534 [259];
  undefined1 uStack_431;
  WCHAR aWStack_430 [260];
  WCHAR aWStack_228 [276];
  
  if (*(int *)(param_2 + 0x268) != 0) {
    return (undefined4 *)0x0;
  }
  local_634[0] = 0;
  local_638 = (undefined4 *)0x0;
  puVar1 = (undefined4 *)
           FUN_010434f0(param_2,DAT_011d9ed0,DAT_011d9ed4,DAT_011d9ed8,DAT_011d9edc,&local_638);
  if ((int)puVar1 < 0) goto LAB_010434d0;
  if (local_638 != (undefined4 *)0x0) {
    local_62c = FUN_01043090(local_638,(int *)(param_2 + 0x250));
    piVar5 = local_634;
    piVar8 = &DAT_011dab80;
    puVar1 = (undefined4 *)(**(code **)*local_638)(local_638);
    if (-1 < (int)puVar1) {
      piVar7 = (int *)&stack0xfffff9c4;
      puVar1 = (undefined4 *)(**(code **)*param_1)(param_1,&DAT_011da030);
      if (-1 < (int)puVar1) {
        puVar2 = (undefined4 *)(**(code **)(*piVar8 + 0x14))(piVar8,unaff_EDI);
        (**(code **)(*piVar8 + 8))(piVar8);
        puVar1 = puVar2;
        if (-1 < (int)puVar2) {
          (**(code **)(*piVar8 + 0x18))(piVar8,&stack0xfffff9c0);
          iVar4 = 4;
          bVar6 = true;
          piVar5 = (int *)&stack0xfffff9b8;
          piVar8 = (int *)(param_2 + 0x250);
          do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            bVar6 = *piVar5 == *piVar8;
            piVar5 = piVar5 + 1;
            piVar8 = piVar8 + 1;
          } while (bVar6);
          if (!bVar6) {
            *(undefined4 *)(param_2 + 0x24c) = 1;
          }
          *(undefined4 *)(param_2 + 0x250) = unaff_EDI;
          *(int **)(param_2 + 0x254) = unaff_ESI;
          *(int **)(param_2 + 600) = unaff_EBP;
          *(undefined4 *)(param_2 + 0x25c) = unaff_EBX;
          if (((*(int *)(param_2 + 0x26c) == 0) || (*(int *)(param_2 + 0x224) == 0)) &&
             (puVar2 = (undefined4 *)
                       (**(code **)(*piVar7 + 0x28))(piVar7,0,0,aWStack_430,0x104,aWStack_228,0x104)
             , -1 < (int)puVar2)) {
            *(undefined4 *)(param_2 + 0x24c) = 1;
            if ((&stack0x00000000 == (undefined1 *)0x430) || (aWStack_430[0] != L'\0')) {
              WideCharToMultiByte(0,0,aWStack_430,-1,aCStack_534,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
            }
            else if (&stack0x00000000 != (undefined1 *)0x534) {
              aCStack_534[0] = '\0';
            }
            uStack_431 = 0;
            if ((&stack0x00000000 == (undefined1 *)0x228) || (aWStack_228[0] != L'\0')) {
              WideCharToMultiByte(0,0,aWStack_228,-1,(LPSTR)&local_638,0x104,(LPCSTR)0x0,(LPBOOL)0x0
                                 );
            }
            else if (&stack0x00000000 != (undefined1 *)0x638) {
              local_638 = (undefined4 *)((uint)local_638 & 0xffffff00);
            }
            uStack_535 = 0;
            if (*(void **)(param_2 + 0x26c) != (void *)0x0) {
              free(*(void **)(param_2 + 0x26c));
            }
            uVar3 = FUN_01043640(aCStack_534);
            *(undefined4 *)(param_2 + 0x26c) = uVar3;
            if (*(void **)(param_2 + 0x224) != (void *)0x0) {
              free(*(void **)(param_2 + 0x224));
            }
            uVar3 = FUN_01043640(&local_638);
            *(undefined4 *)(param_2 + 0x224) = uVar3;
          }
          (**(code **)(*piVar7 + 0xc))(piVar7,*(undefined4 *)(param_2 + 0x260));
          puVar1 = local_638;
          if ((int)local_638 < 0) {
            (**(code **)(*unaff_EBP + 8))(unaff_EBP);
          }
          else {
            *(undefined4 *)(param_2 + 0x268) = 1;
            *(int **)(param_2 + 0x264) = unaff_EBP;
            puVar1 = puVar2;
          }
          goto LAB_010434c2;
        }
      }
      (**(code **)(*piVar5 + 8))(piVar5);
    }
LAB_010434c2:
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  if (-1 < (int)puVar1) {
    return puVar1;
  }
LAB_010434d0:
  *(undefined4 *)(param_2 + 0x268) = 2;
  return puVar1;
}


