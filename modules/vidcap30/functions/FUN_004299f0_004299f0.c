/* Module: vidcap30.exe
   Function: FUN_004299f0
   Address: 004299f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004299f0(int param_1)

{
  LPVOID *ppv;
  int iVar1;
  int iVar2;
  HRESULT HVar3;
  int *piStack_30;
  wchar_t *pwStack_2c;
  undefined4 *puStack_28;
  int *apiStack_10 [2];
  undefined4 uStack_8;
  int iStack_4;
  
  iVar1 = param_1;
  puStack_28 = &param_1;
  pwStack_2c = L"Audio Renderer";
  piStack_30 = *(int **)(param_1 + 0x350);
  iVar2 = (**(code **)(*piStack_30 + 0x18))();
  if (iStack_4 == 0) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (**(code **)(**(int **)(iVar1 + 0x350) + 0x10))(*(int **)(iVar1 + 0x350),uStack_8);
      if (apiStack_10[0] != (int *)0x0) {
        (**(code **)(*apiStack_10[0] + 8))(apiStack_10[0]);
        return iVar2;
      }
    }
  }
  else {
    if (-1 < iVar2) {
LAB_00429a22:
      *(uint *)(iVar1 + 0x148) = *(uint *)(iVar1 + 0x148) | 0x800000;
      *(undefined4 *)(iVar1 + 0x14c) = *(undefined4 *)(iVar1 + 0x14c);
      *(undefined4 *)(iVar1 + 0x3fc) = uStack_8;
      return iVar2;
    }
    iVar2 = 0;
    if ((*(uint *)(iVar1 + 0x14c) & 0x10) == 0) {
      if ((*(int *)(iVar1 + 0x404) != 0) &&
         (((iVar2 = (**(code **)(**(int **)(iVar1 + 0x3b4) + 0x1c))
                              (*(int **)(iVar1 + 0x3b4),&DAT_005a2428,&DAT_005a35e8,
                               *(int *)(iVar1 + 0x404),0,0), iVar2 == 0x4027e || (-1 < iVar2)) &&
          (iVar2 = (**(code **)(**(int **)(iVar1 + 0x350) + 0x18))
                             (*(int **)(iVar1 + 0x350),L"Audio Renderer",&stack0xffffffe0),
          -1 < iVar2)))) goto LAB_00429a22;
    }
    else {
      iVar2 = (**(code **)(**(int **)(iVar1 + 0x350) + 0x18))
                        (*(int **)(iVar1 + 0x350),L"DV Splitter",&stack0xffffffe0);
      if (-1 < iVar2) {
        apiStack_10[0] = (int *)0x0;
        puStack_28 = (undefined4 *)0x1;
        iVar2 = FUN_00420460(&stack0xffffffdc,1,&DAT_005a35e8,0,0,pwStack_2c,apiStack_10,&puStack_28
                            );
        if (iVar2 == 0) {
          ppv = (LPVOID *)(iVar1 + 0x3fc);
          HVar3 = CoCreateInstance((IID *)&DAT_005a2f28,(LPUNKNOWN)0x0,1,(IID *)&DAT_005a1ca8,ppv);
          if (HVar3 < 0) {
            iVar2 = 1;
          }
          else {
            iVar2 = (**(code **)(**(int **)(iVar1 + 0x350) + 0xc))
                              (*(int **)(iVar1 + 0x350),*ppv,L"SF:P-Default DirectSound Device");
            if (-1 < iVar2) {
              piStack_30 = (int *)0x0;
              iVar2 = FUN_00420460(&stack0xffffffe4,3,0,0,0,*ppv,&piStack_30,&stack0xffffffe0);
              if (-1 < iVar2) {
                iVar2 = (**(code **)(**(int **)(iVar1 + 0x350) + 0x2c))
                                  (*(int **)(iVar1 + 0x350),apiStack_10[0],piStack_30);
                if (-1 < iVar2) {
                  *(uint *)(iVar1 + 0x148) = *(uint *)(iVar1 + 0x148) | 0x800000;
                  *(undefined4 *)(iVar1 + 0x14c) = *(undefined4 *)(iVar1 + 0x14c);
                }
                if (piStack_30 != (int *)0x0) {
                  (**(code **)(*piStack_30 + 8))(piStack_30);
                }
              }
            }
          }
          if (apiStack_10[0] != (int *)0x0) {
            (**(code **)(*apiStack_10[0] + 8))(apiStack_10[0]);
          }
          apiStack_10[0] = (int *)0x0;
        }
        if (pwStack_2c != (wchar_t *)0x0) {
          (**(code **)(*(int *)pwStack_2c + 8))(pwStack_2c);
          return iVar2;
        }
      }
    }
  }
  return iVar2;
}


