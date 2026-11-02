/* Module: vidpcore.dll
   Function: FUN_5de7f230
   Address: 5de7f230
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5de7f230(int *param_1,undefined4 param_2,uint param_3,HWND param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *unaff_EBX;
  uint uVar3;
  float10 fVar4;
  int *local_11c;
  int *local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  CHAR local_104 [260];
  
  uVar3 = param_3 & 0xffff;
  if ((uVar3 < 0x9e34) || (40999 < uVar3)) {
    if (0x7f00 < uVar3) {
      if (uVar3 == 41000) {
        FUN_5deb3eb0(1,param_1[0xc],0x3f3,0xf,0);
        return 0;
      }
      if (uVar3 != 0xa029) {
        return 0;
      }
      FUN_5de06da0(param_1[0xc]);
      return 0;
    }
    if (uVar3 == 0x7f00) goto LAB_5de7f438;
  }
  else {
    puVar1 = *(undefined4 **)param_1[2];
    local_11c = (int *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,&DAT_5df17ba0,&local_11c);
    }
    iVar2 = (**(code **)*local_11c)(local_11c,&DAT_5df180c0,&local_118);
    if (-1 < iVar2) {
      (**(code **)(*local_118 + 0x14))(local_118,uVar3 - 0x9e34);
      (**(code **)(*unaff_EBX + 8))(unaff_EBX);
    }
    if (local_11c != (int *)0x0) {
      (**(code **)(*local_11c + 8))(local_11c);
    }
    uVar3 = 0;
  }
  if (uVar3 == 0x453) {
    SendMessageA(param_4,0x702,0,(LPARAM)&fStack_114);
    *(double *)(param_1 + 0x18) = (double)fStack_10c;
    *(double *)(param_1 + 0x16) = (double)fStack_110;
    *(double *)(param_1 + 0x14) = (double)fStack_114;
    *(double *)(param_1 + 0x1a) = (double)fStack_108;
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
  if (uVar3 == 0x456) {
    if (param_3 >> 0x10 != 0x200) {
      return 0;
    }
    iVar2 = GetWindowTextA(param_4,local_104,0x104);
    if (iVar2 != 0) {
      fVar4 = (float10)FUN_5dec5e20(local_104,0);
      if ((float10)_DAT_5df18838 <= fVar4) {
        fVar4 = (float10)FUN_5dec5e20(local_104,0);
        if (fVar4 <= (float10)_DAT_5df18830) {
          fVar4 = (float10)FUN_5dec5e20(local_104,0);
        }
        else {
          fVar4 = (float10)_DAT_5df18830;
        }
      }
      else {
        fVar4 = (float10)_DAT_5df18838;
      }
      if ((float10)_DAT_5df1f300 <= ABS(fVar4 - (float10)*(double *)(param_1 + 0x1e))) {
        *(double *)(param_1 + 0x1e) = (double)fVar4;
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
    }
  }
  else {
    if ((uVar3 != 0x457) || (param_3 >> 0x10 != 0x200)) {
      return 0;
    }
    iVar2 = GetWindowTextA(param_4,local_104,0x104);
    if (iVar2 != 0) {
      fVar4 = (float10)FUN_5dec5e20(local_104,0);
      if ((float10)_DAT_5df18838 <= fVar4) {
        fVar4 = (float10)FUN_5dec5e20(local_104,0);
        if (fVar4 <= (float10)_DAT_5df18830) {
          fVar4 = (float10)FUN_5dec5e20(local_104,0);
        }
        else {
          fVar4 = (float10)_DAT_5df18830;
        }
      }
      else {
        fVar4 = (float10)_DAT_5df18838;
      }
      if ((float10)_DAT_5df1f300 <= ABS(fVar4 - (float10)*(double *)(param_1 + 0x1c))) {
        *(double *)(param_1 + 0x1c) = (double)fVar4;
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
    }
  }
LAB_5de7f438:
  FUN_5de7f4e0();
  return 0;
}


