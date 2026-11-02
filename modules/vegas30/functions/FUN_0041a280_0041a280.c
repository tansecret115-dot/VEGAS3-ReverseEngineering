/* Module: vegas30.exe
   Function: FUN_0041a280
   Address: 0041a280
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041a280(int param_1,uint param_2)

{
  LPVOID *ppv;
  int *piVar1;
  HRESULT HVar2;
  int iVar3;
  int *piVar4;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  FUN_00419e80(param_1,1);
  if (*(int *)(param_1 + 0x220) != 0) {
    *(uint *)(param_1 + 0x230) = param_2;
    if (param_2 < *(uint *)(param_1 + 0x224)) {
      ppv = (LPVOID *)(param_1 + 0x23c);
      iVar3 = *(int *)(param_1 + 0x220) + param_2 * 0x44;
      HVar2 = CoCreateInstance((IID *)(iVar3 + 0x28),(LPUNKNOWN)0x0,3,(IID *)&DAT_00633708,ppv);
      piVar4 = (int *)(iVar3 + 0x1c);
      piVar1 = (int *)*piVar4;
      *(int **)(param_1 + 0x240) = piVar1;
      (**(code **)(*piVar1 + 4))(piVar1);
      if (-1 < HVar2) {
        iVar3 = (**(code **)(*(int *)*ppv + 0xc))(*ppv,*(undefined4 *)(param_1 + 0x234));
        if (-1 < iVar3) {
          if (*piVar4 != 0) {
            iVar3 = (**(code **)(*(int *)*ppv + 0x1c))(*ppv,1,piVar4);
            if (iVar3 < 0) goto LAB_0041a386;
          }
          uStack_8 = *(undefined4 *)(param_1 + 0x228);
          uStack_4 = *(undefined4 *)(param_1 + 0x22c);
          uStack_10 = 0;
          uStack_c = 0;
          if (DAT_0064ab78 != 0) {
            _fpreset();
          }
          (**(code **)(*(int *)*ppv + 0x10))(*ppv,*(undefined4 *)(param_1 + 0x238),&uStack_10,0);
          *(undefined4 *)(param_1 + 0x244) = 1;
          SendMessageA(*(HWND *)(param_1 + 0x250),0x602,*(WPARAM *)(param_1 + 0x230),0);
        }
      }
    }
  }
LAB_0041a386:
  FUN_00418940(param_1,*(undefined4 *)(param_1 + 0x244));
  return;
}


