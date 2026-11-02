/* Module: vegas30.exe
   Function: FUN_00572a90
   Address: 00572a90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_00572a90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  int iVar2;
  HDC hDC;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_6c;
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  undefined1 auStack_30 [24];
  undefined1 auStack_18 [24];
  
  if ((*(int **)(param_1 + 0x2b0) != (int *)0x0) && (iVar1 = **(int **)(param_1 + 0x2b0), 0 < iVar1)
     ) {
    hDC = GetDC(*(HWND *)(param_1 + 0x24));
    local_6c = 0;
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x2b0) + 8) + local_6c * 4);
        if (*(int *)(iVar2 + 0x470) != 0) {
          if (*(int *)(iVar2 + 8) == 3) {
            (**(code **)(**(int **)(iVar2 + 4) + 0xb8))
                      (*(int **)(iVar2 + 4),param_2,param_3,local_60,local_48);
          }
          else {
            uVar3 = param_2;
            uVar4 = param_3;
            if (*(int *)(iVar2 + 8) == 1) {
              uVar3 = param_4;
              uVar4 = param_5;
            }
            (**(code **)(**(int **)(iVar2 + 4) + 0xac))
                      (*(int **)(iVar2 + 4),uVar3,uVar4,local_60,local_48);
          }
          _MeterInst_Message_16(*(undefined4 *)(iVar2 + 0x470),0x60c,0x20000,local_60);
          if (*(int *)(iVar2 + 0x2c0) != *(int *)(iVar2 + 0x2b8)) {
            _MeterInst_Draw_16(*(undefined4 *)(iVar2 + 0x470),hDC,&LAB_005751c0,param_1);
          }
        }
        if ((*(int *)(iVar2 + 8) == 2) && (*(int *)(iVar2 + 0x818) != 0)) {
          (**(code **)(**(int **)(iVar2 + 4) + 0xb8))
                    (*(int **)(iVar2 + 4),param_2,param_3,auStack_30,auStack_18);
          _MeterInst_Message_16(*(undefined4 *)(iVar2 + 0x818),0x60c,0x20000,auStack_30);
          if (*(int *)(iVar2 + 0x6e0) != *(int *)(iVar2 + 0x6d8)) {
            _MeterInst_Draw_16(*(undefined4 *)(iVar2 + 0x818),hDC,&LAB_005751e0,param_1);
          }
        }
        local_6c = local_6c + 1;
      } while (local_6c < iVar1);
    }
    ReleaseDC(*(HWND *)(param_1 + 0x24),hDC);
  }
  return;
}


