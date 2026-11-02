/* Module: vidcap30.exe
   Function: FUN_00423ba0
   Address: 00423ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00423ccb) */

HRESULT FUN_00423ba0(int param_1)

{
  int iVar1;
  HRESULT HVar2;
  int *unaff_ESI;
  int *piStack_20;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  int *apiStack_8 [2];
  
  piStack_20 = &local_c;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x350) + 0x18))
                    (*(int **)(param_1 + 0x350),L"AVI Splitter");
  if (iVar1 < 0) {
    return 0;
  }
  apiStack_8[0] = (int *)0x0;
  uStack_10 = 1;
  uStack_14 = 1;
  iVar1 = FUN_00420460(&uStack_10,1,&DAT_005a3578,0,0,unaff_ESI,apiStack_8,&uStack_14);
  if (iVar1 < 0) {
    HVar2 = 0;
  }
  else {
    *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) | 0x10000;
    *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
    HVar2 = CoCreateInstance((IID *)&DAT_005a2d88,(LPUNKNOWN)0x0,1,(IID *)&DAT_005a1ca8,
                             (LPVOID *)(param_1 + 0x330));
    if ((-1 < HVar2) &&
       (HVar2 = (**(code **)(**(int **)(param_1 + 0x350) + 0xc))
                          (*(int **)(param_1 + 0x350),*(LPVOID *)(param_1 + 0x330),
                           &PTR_BYTE_0058a594), -1 < HVar2)) {
      piStack_20 = (int *)0x0;
      HVar2 = FUN_00420930(param_1,"Video Renderer",0,0,0,&stack0xffffffe4,&piStack_20);
      if (-1 < HVar2) {
        HVar2 = (**(code **)(**(int **)(param_1 + 0x350) + 0x30))(*(int **)(param_1 + 0x350),0);
        if (-1 < HVar2) {
          HVar2 = (**(code **)(**(int **)(param_1 + 0x350) + 0x30))
                            (*(int **)(param_1 + 0x350),apiStack_8[0]);
        }
        if (piStack_20 != (int *)0x0) {
          (**(code **)(*piStack_20 + 8))(piStack_20);
        }
        piStack_20 = (int *)0x0;
      }
    }
    if (apiStack_8[0] != (int *)0x0) {
      (**(code **)(*apiStack_8[0] + 8))(apiStack_8[0]);
    }
    apiStack_8[0] = (int *)0x0;
  }
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return HVar2;
}


