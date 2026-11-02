/* Module: pngu3266.dll
   Function: GetArrowRect
   Address: 606176d4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNScrollHelper::GetArrowRect(class CPNxRect const &,unsigned
   long,unsigned long,class CPNxRect &) */

void __thiscall
CPNScrollHelper::GetArrowRect
          (CPNScrollHelper *this,CPNxRect *param_1,ulong param_2,ulong param_3,CPNxRect *param_4)

{
  uint uVar1;
  uint uVar2;
  
                    /* 0x276d4  1088  ?GetArrowRect@CPNScrollHelper@@QAEXABVCPNxRect@@KKAAV2@@Z */
  *(undefined4 *)param_4 = *(undefined4 *)param_1;
  *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_4 + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_4 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  uVar2 = param_2 & 8;
  uVar1 = param_2 & 4;
  if (uVar1 != 0) {
    if (uVar2 != 0) goto LAB_60617726;
    if ((uVar1 != 0) && (param_3 == 8)) {
      *(undefined4 *)param_4 = 0;
      *(undefined4 *)(param_4 + 4) = 0;
      *(undefined4 *)(param_4 + 8) = 0;
      *(undefined4 *)(param_4 + 0xc) = 0;
    }
  }
  if ((uVar2 != 0) && (param_3 == 4)) {
    *(undefined4 *)param_4 = 0;
    *(undefined4 *)(param_4 + 4) = 0;
    *(undefined4 *)(param_4 + 8) = 0;
    *(undefined4 *)(param_4 + 0xc) = 0;
  }
LAB_60617726:
  if ((param_2 & 1) == 0) {
    if ((((param_2 & 2) != 0) && (uVar1 != 0)) && (uVar2 != 0)) {
      if (param_3 == 4) {
        *(int *)(param_4 + 4) =
             (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 2 + *(int *)(param_1 + 4);
      }
      else if (param_3 == 8) {
        *(int *)(param_4 + 0xc) =
             (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 2 + *(int *)(param_1 + 4);
      }
    }
  }
  else if ((uVar1 != 0) && (uVar2 != 0)) {
    if (param_3 == 4) {
      *(int *)(param_4 + 8) = (*(int *)(param_1 + 8) - *(int *)param_1) / 2 + *(int *)param_4;
    }
    else if (param_3 == 8) {
      *(int *)param_4 = *(int *)param_4 + (*(int *)(param_1 + 8) - *(int *)param_1) / 2;
    }
  }
  return;
}


