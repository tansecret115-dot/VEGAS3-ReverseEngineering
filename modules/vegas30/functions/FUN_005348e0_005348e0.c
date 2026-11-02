/* Module: vegas30.exe
   Function: FUN_005348e0
   Address: 005348e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005348e0(undefined4 param_1,int param_2,int param_3)

{
  void *pvVar1;
  int iVar2;
  HGLOBAL hMem;
  int *piVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  int *unaff_ESI;
  int *unaff_EDI;
  uint uVar7;
  int *piVar8;
  WCHAR *pWVar9;
  int *local_210;
  int local_20c;
  WCHAR aWStack_208 [259];
  undefined2 uStack_2;
  
  _fpreset();
  local_20c = 0;
  if (param_3 == 0) {
    return -0x7fff0001;
  }
  piVar8 = *(int **)(param_2 + 8);
  if (piVar8 != (int *)0x0) {
    if (*(int *)(param_3 + 0x1c) == 0) {
      *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_2 + 0x414);
      *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_2 + 0x418);
      *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_2 + 0x41c);
      *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_2 + 0x420);
      *(undefined2 *)(param_3 + 0x14) = *(undefined2 *)(param_2 + 0x424);
      iVar2 = FUN_005fcf70(param_1,(undefined4 *)(param_2 + 0x414),*(undefined4 *)(param_2 + 0x8e0),
                           *(undefined4 *)(param_2 + 0x8e4),*(undefined4 *)(param_2 + 0x8f0),
                           *(undefined4 *)(param_2 + 0x8f4),*(undefined4 *)(param_3 + 0x18));
      if (iVar2 < 0) {
        return local_20c;
      }
      local_210 = (int *)0x0;
      iVar2 = (**(code **)(*piVar8 + 0x34))(piVar8,&local_210,0,0,0);
      local_20c = iVar2;
      if (-1 < iVar2) {
        if (local_210 != (int *)0x0) {
          uVar7 = 0;
          if (*(int *)(param_3 + 0x140) != 0) {
            iVar5 = 0;
            do {
              iVar2 = (**(code **)(*local_210 + 0x3c))
                                (local_210,*(undefined4 *)(iVar5 + *(int *)(param_3 + 0x13c)),uVar7)
              ;
              uVar7 = uVar7 + 1;
              iVar5 = iVar5 + 4;
            } while (uVar7 < *(uint *)(param_3 + 0x140));
          }
          uVar6 = 0;
          if (*(int *)(param_3 + 0x130) != 0) {
            do {
              iVar2 = (**(code **)(*local_210 + 0x3c))
                                (local_210,*(undefined4 *)(*(int *)(param_3 + 0x128) + uVar6 * 4),
                                 uVar7);
              uVar7 = uVar7 + 1;
              uVar6 = uVar6 + 1;
            } while (uVar6 < *(uint *)(param_3 + 0x130));
          }
          if (*(int *)(param_3 + 300) != 0) {
            (**(code **)(*local_210 + 0x40))(local_210,*(int *)(param_3 + 300));
          }
        }
        if (-1 < iVar2) {
          MultiByteToWideChar(0,1,(LPCSTR)(param_3 + 0x20),-1,aWStack_208,0x104);
          pWVar9 = aWStack_208;
          uStack_2 = 0;
          (**(code **)(*local_210 + 0x1c))(local_210);
          hMem = GlobalAlloc(0x40,0x20);
          piVar3 = GlobalLock(hMem);
          piVar8 = (int *)0x0;
          if (piVar3 != (int *)0x0) {
            piVar3[4] = 1;
            piVar3[5] = 0;
            piVar3[1] = 1;
            piVar3[2] = param_2;
            *piVar3 = (int)&PTR_LAB_0061a844;
            piVar8 = piVar3;
          }
          iVar2 = (**(code **)(*unaff_ESI + 0x44))(unaff_ESI,piVar8);
          if (piVar8 != (int *)0x0) {
            (**(code **)(*piVar8 + 8))(piVar8);
          }
          if ((iVar2 == -0x7ffb1ff4) &&
             ((*(int *)(param_2 + 0x918) != 0 || (*(int *)(param_2 + 0x914) != 0)))) {
            DeleteFileA((LPCSTR)(param_3 + 0x20));
          }
          (**(code **)(*unaff_EDI + 0x10))(unaff_EDI);
          (**(code **)(*(int *)pWVar9 + 8))(pWVar9);
        }
      }
    }
    if ((*(int *)(param_3 + 0x13c) != 0) && (*(int *)(param_3 + 0x140) != 0)) {
      uVar7 = 0;
      if (*(int *)(param_3 + 0x140) != 0) {
        do {
          piVar8 = *(int **)(*(int *)(param_3 + 0x13c) + uVar7 * 4);
          (**(code **)(*piVar8 + 8))(piVar8);
          pvVar1 = *(void **)(*(int *)(param_3 + 0x138) + uVar7 * 4);
          if (pvVar1 != (void *)0x0) {
            free(pvVar1);
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(uint *)(param_3 + 0x140));
      }
      if (*(void **)(param_3 + 0x13c) != (void *)0x0) {
        free(*(void **)(param_3 + 0x13c));
      }
      *(undefined4 *)(param_3 + 0x13c) = 0;
      if (*(void **)(param_3 + 0x138) != (void *)0x0) {
        free(*(void **)(param_3 + 0x138));
      }
      *(undefined4 *)(param_3 + 0x138) = 0;
    }
    if ((*(int *)(param_3 + 0x128) != 0) && (*(int *)(param_3 + 0x130) != 0)) {
      uVar7 = 0;
      if (*(int *)(param_3 + 0x130) != 0) {
        do {
          piVar8 = *(int **)(*(int *)(param_3 + 0x128) + uVar7 * 4);
          (**(code **)(*piVar8 + 8))(piVar8);
          pvVar1 = *(void **)(*(int *)(param_3 + 0x124) + uVar7 * 4);
          if (pvVar1 != (void *)0x0) {
            free(pvVar1);
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(uint *)(param_3 + 0x130));
      }
      if (*(void **)(param_3 + 0x128) != (void *)0x0) {
        free(*(void **)(param_3 + 0x128));
      }
      *(undefined4 *)(param_3 + 0x128) = 0;
      if (*(void **)(param_3 + 0x124) != (void *)0x0) {
        free(*(void **)(param_3 + 0x124));
      }
      *(undefined4 *)(param_3 + 0x124) = 0;
    }
    piVar8 = *(int **)(param_3 + 300);
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 8))(piVar8);
      *(undefined4 *)(param_3 + 300) = 0;
    }
    lVar4 = Mixer_StopRender(*(ulong *)(param_3 + 0x18));
    if ((lVar4 < 0) && (-1 < local_20c)) {
      local_20c = lVar4;
    }
  }
  return local_20c;
}


