/* Module: vegas30.exe
   Function: FUN_005438c0
   Address: 005438c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005438c0(int *param_1,int *param_2,int param_3)

{
  ushort uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  GetCurrentThreadId();
  piVar6 = param_2;
  piVar3 = param_1;
  if (((param_1[0xd] != *param_2) || (param_1[0xe] != param_2[1])) || (param_3 != 0)) {
    FUN_005433c0(param_1);
    iVar4 = *piVar6;
    if (iVar4 < 2) {
      iVar4 = 1;
    }
    piVar3[0xd] = iVar4;
    iVar4 = piVar6[1];
    if (iVar4 < 2) {
      iVar4 = 1;
    }
    piVar3[0xe] = iVar4;
    EnterCriticalSection((LPCRITICAL_SECTION)(piVar3[2] + 0xc));
    iVar4 = *(int *)piVar3[2];
    param_3 = iVar4;
    if (piVar3[4] <= iVar4) {
      param_3 = piVar3[4];
    }
    iVar7 = 0;
    param_2 = (int *)0x0;
    if (0 < iVar4) {
      do {
        puVar2 = *(undefined4 **)(*(int *)(piVar3[2] + 8) + iVar7 * 4);
        param_1 = (int *)0x0;
        iVar5 = _SfDibAlloc_28(&param_1,piVar3[0xf],piVar3[0xd],piVar3[0xe],0,0,0);
        if (((iVar5 < 0) || ((puVar2[2] == -1 && (puVar2[3] == -1)))) || (puVar2[7] != 0)) {
          puVar2[2] = 0xffffffff;
          puVar2[3] = 0xffffffff;
        }
        else {
          _SfDibCopy_36(param_1,0,0,0,*puVar2,0,0,0,2);
          puVar2[7] = 1;
          param_2 = (int *)((int)param_2 + 1);
        }
        _SfDibFree_8(*puVar2,0);
        puVar2[1] = 0;
        *puVar2 = param_1;
        if (param_1 != (int *)0x0) {
          if (param_1[4] == 0) {
            if (((param_1[8] != 0) || (uVar1 = *(ushort *)((int)param_1 + 0xe), uVar1 == 0)) ||
               (8 < uVar1)) goto LAB_00543a0f;
            iVar5 = 1 << ((byte)uVar1 & 0x1f);
LAB_00543a12:
            piVar6 = (int *)(*param_1 + iVar5 * 4 + (int)param_1);
          }
          else {
            if (param_1[4] != 3) {
LAB_00543a0f:
              iVar5 = param_1[8];
              goto LAB_00543a12;
            }
            piVar6 = param_1 + 0xd;
          }
          puVar2[1] = piVar6;
        }
        if (param_3 <= (int)param_2) {
          if (iVar7 < iVar4) {
            iVar4 = iVar4 - iVar7;
            do {
              puVar2 = *(undefined4 **)(*(int *)(piVar3[2] + 8) + iVar7 * 4);
              _SfDibFree_8(*puVar2,0);
              free(puVar2);
              *(undefined4 *)(*(int *)(piVar3[2] + 8) + iVar7 * 4) = 0;
              _SfList_DeleteList_16(piVar3[2],iVar7,1,0);
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          break;
        }
        iVar7 = iVar7 + 1;
        if (iVar4 <= iVar7) {
          LeaveCriticalSection((LPCRITICAL_SECTION)(piVar3[2] + 0xc));
          return;
        }
      } while( true );
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(piVar3[2] + 0xc));
  }
  return;
}


