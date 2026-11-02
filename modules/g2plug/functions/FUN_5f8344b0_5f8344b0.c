/* Module: g2plug.dll
   Function: FUN_5f8344b0
   Address: 5f8344b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_5f8344b0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  uchar *puVar3;
  int iVar4;
  undefined4 unaff_EBX;
  int *unaff_EBP;
  int *unaff_ESI;
  undefined4 unaff_EDI;
  int *piVar5;
  bool bVar6;
  int *piVar7;
  int *piVar8;
  int *local_638;
  int local_634 [2];
  undefined *local_62c;
  undefined1 uStack_535;
  uchar auStack_534 [259];
  undefined1 uStack_431;
  WCHAR aWStack_430 [260];
  WCHAR aWStack_228 [276];
  
  if (*(int *)(param_1 + 0x268) != 0) {
    return (int *)0x0;
  }
  local_634[0] = 0;
  local_638 = (int *)0x0;
  piVar1 = (int *)FUN_5f834790(param_1);
  if ((int)piVar1 < 0) goto LAB_5f834770;
  if (local_638 != (int *)0x0) {
    local_62c = FUN_5f834330(local_638,param_1 + 0x250);
    piVar5 = local_634;
    piVar8 = &DAT_5f86a3d0;
    piVar1 = (int *)(**(code **)*local_638)(local_638);
    if (-1 < (int)piVar1) {
      piVar7 = (int *)&stack0xfffff9c4;
      piVar1 = (int *)(*(code *)**(undefined4 **)this)(this,&DAT_5f869c60);
      if (-1 < (int)piVar1) {
        piVar2 = (int *)(**(code **)(*piVar8 + 0x14))(piVar8,unaff_EDI);
        (**(code **)(*piVar8 + 8))(piVar8);
        piVar1 = piVar2;
        if (-1 < (int)piVar2) {
          (**(code **)(*piVar8 + 0x18))(piVar8,&stack0xfffff9c0);
          iVar4 = 4;
          bVar6 = true;
          piVar1 = (int *)&stack0xfffff9b8;
          piVar5 = (int *)(param_1 + 0x250);
          do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            bVar6 = *piVar1 == *piVar5;
            piVar1 = piVar1 + 1;
            piVar5 = piVar5 + 1;
          } while (bVar6);
          if (!bVar6) {
            *(undefined4 *)(param_1 + 0x24c) = 1;
          }
          *(undefined4 *)(param_1 + 0x250) = unaff_EDI;
          *(int **)(param_1 + 0x254) = unaff_ESI;
          *(int **)(param_1 + 600) = unaff_EBP;
          *(undefined4 *)(param_1 + 0x25c) = unaff_EBX;
          if (((*(int *)(param_1 + 0x26c) == 0) || (*(int *)(param_1 + 0x224) == 0)) &&
             (piVar2 = (int *)(**(code **)(*piVar7 + 0x28))
                                        (piVar7,0,0,aWStack_430,0x104,aWStack_228,0x104),
             -1 < (int)piVar2)) {
            *(undefined4 *)(param_1 + 0x24c) = 1;
            if ((&stack0x00000000 == (undefined1 *)0x430) || (aWStack_430[0] != L'\0')) {
              WideCharToMultiByte(0,0,aWStack_430,-1,(LPSTR)auStack_534,0x104,(LPCSTR)0x0,
                                  (LPBOOL)0x0);
            }
            else if (&stack0x00000000 != (undefined1 *)0x534) {
              auStack_534[0] = '\0';
            }
            uStack_431 = 0;
            if ((&stack0x00000000 == (undefined1 *)0x228) || (aWStack_228[0] != L'\0')) {
              WideCharToMultiByte(0,0,aWStack_228,-1,(LPSTR)&local_638,0x104,(LPCSTR)0x0,(LPBOOL)0x0
                                 );
            }
            else if (&stack0x00000000 != (undefined1 *)0x638) {
              local_638 = (int *)((uint)local_638 & 0xffffff00);
            }
            uStack_535 = 0;
            if (*(void **)(param_1 + 0x26c) != (void *)0x0) {
              free(*(void **)(param_1 + 0x26c));
            }
            puVar3 = FUN_5f8348e0(auStack_534);
            *(uchar **)(param_1 + 0x26c) = puVar3;
            if (*(void **)(param_1 + 0x224) != (void *)0x0) {
              free(*(void **)(param_1 + 0x224));
            }
            puVar3 = FUN_5f8348e0((uchar *)&local_638);
            *(uchar **)(param_1 + 0x224) = puVar3;
          }
          (**(code **)(*piVar7 + 0xc))(piVar7,*(undefined4 *)(param_1 + 0x260));
          piVar1 = local_638;
          if ((int)local_638 < 0) {
            (**(code **)(*unaff_EBP + 8))(unaff_EBP);
          }
          else {
            *(undefined4 *)(param_1 + 0x268) = 1;
            *(int **)(param_1 + 0x264) = unaff_EBP;
            piVar1 = piVar2;
          }
          goto LAB_5f834762;
        }
      }
      (**(code **)(*piVar5 + 8))(piVar5);
    }
LAB_5f834762:
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  if (-1 < (int)piVar1) {
    return piVar1;
  }
LAB_5f834770:
  *(undefined4 *)(param_1 + 0x268) = 2;
  return piVar1;
}


