/* Module: wmfplug2.dll
   Function: FUN_0043dcd0
   Address: 0043dcd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_0043dcd0(void *this,int param_1)

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
  undefined4 *local_62c;
  undefined1 uStack_535;
  uchar auStack_534 [259];
  undefined1 uStack_431;
  WCHAR aWStack_430 [260];
  WCHAR aWStack_228 [276];
  
  if (*(int *)(param_1 + 0x2a4) != 0) {
    return (int *)0x0;
  }
  local_634[0] = 0;
  local_638 = (int *)0x0;
  piVar1 = (int *)FUN_0043dae0(param_1);
  if ((int)piVar1 < 0) goto LAB_0043df90;
  if (local_638 != (int *)0x0) {
    local_62c = FUN_0043d680(local_638,param_1 + 0x28c);
    piVar5 = local_634;
    piVar8 = &DAT_004851c8;
    piVar1 = (int *)(**(code **)*local_638)(local_638);
    if (-1 < (int)piVar1) {
      piVar7 = (int *)&stack0xfffff9c4;
      piVar1 = (int *)(*(code *)**(undefined4 **)this)(this,&DAT_0047aca0);
      if (-1 < (int)piVar1) {
        piVar2 = (int *)(**(code **)(*piVar8 + 0x14))(piVar8,unaff_EDI);
        (**(code **)(*piVar8 + 8))(piVar8);
        piVar1 = piVar2;
        if (-1 < (int)piVar2) {
          (**(code **)(*piVar8 + 0x1c))(piVar8,&stack0xfffff9c0);
          iVar4 = 4;
          bVar6 = true;
          piVar1 = (int *)&stack0xfffff9b8;
          piVar5 = (int *)(param_1 + 0x28c);
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
          *(undefined4 *)(param_1 + 0x28c) = unaff_EDI;
          *(int **)(param_1 + 0x290) = unaff_ESI;
          *(int **)(param_1 + 0x294) = unaff_EBP;
          *(undefined4 *)(param_1 + 0x298) = unaff_EBX;
          if (((*(int *)(param_1 + 0x2a8) == 0) || (*(int *)(param_1 + 0x224) == 0)) &&
             (piVar2 = (int *)(**(code **)(*piVar7 + 0x2c))
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
            if (*(void **)(param_1 + 0x2a8) != (void *)0x0) {
              free(*(void **)(param_1 + 0x2a8));
            }
            puVar3 = FUN_0043dc30(auStack_534);
            *(uchar **)(param_1 + 0x2a8) = puVar3;
            if (*(void **)(param_1 + 0x224) != (void *)0x0) {
              free(*(void **)(param_1 + 0x224));
            }
            puVar3 = FUN_0043dc30((uchar *)&local_638);
            *(uchar **)(param_1 + 0x224) = puVar3;
          }
          (**(code **)(*piVar7 + 0xc))(piVar7,*(undefined4 *)(param_1 + 0x29c));
          piVar1 = local_638;
          if ((int)local_638 < 0) {
            (**(code **)(*unaff_EBP + 8))(unaff_EBP);
          }
          else {
            *(undefined4 *)(param_1 + 0x2a4) = 1;
            *(int **)(param_1 + 0x2a0) = unaff_EBP;
            piVar1 = piVar2;
          }
          goto LAB_0043df82;
        }
      }
      (**(code **)(*piVar5 + 8))(piVar5);
    }
LAB_0043df82:
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  if (-1 < (int)piVar1) {
    return piVar1;
  }
LAB_0043df90:
  *(undefined4 *)(param_1 + 0x2a4) = 2;
  return piVar1;
}


