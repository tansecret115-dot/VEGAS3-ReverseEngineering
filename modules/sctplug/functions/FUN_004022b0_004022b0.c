/* Module: sctplug.dll
   Function: FUN_004022b0
   Address: 004022b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004022b0(void *this,HWND param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  if (param_2 < 0x111) {
    if (param_2 == 0x110) {
      *(HWND *)((int)this + 0x10) = param_1;
      FUN_00402420((int)this);
      *(undefined4 *)((int)this + 0x24) = 0;
      return 1;
    }
    if (param_2 == 2) {
      FUN_004037c0((int)this);
      *(undefined4 *)((int)this + 0x10) = 0;
      return 0;
    }
    if (param_2 == 0x53) {
      FUN_0040bed0(0,param_1,0,*(int *)(param_4 + 8),(int *)&DAT_0043b030,(uchar *)0x0);
      return 1;
    }
switchD_0040235f_caseD_4f9:
    return 0;
  }
  if (param_2 != 0x111) {
    return 0;
  }
  if (*(int *)((int)this + 0x28) == 0) {
    return 1;
  }
  uVar1 = param_3 & 0xffff;
  uVar2 = param_3 >> 0x10;
  if (uVar1 < 0x50f) {
    if (uVar1 != 0x50e) {
      switch(uVar1) {
      case 0x4f5:
      case 0x4f6:
      case 0x4f7:
      case 0x4fa:
      case 0x4fb:
      case 0x4fc:
      case 0x50c:
        break;
      case 0x4f8:
      case 0x50d:
        goto switchD_0040235f_caseD_4f8;
      default:
        goto switchD_0040235f_caseD_4f9;
      }
    }
    bVar3 = uVar2 == 0x300;
  }
  else {
    if (0x7d3 < uVar1) {
      if (uVar1 < 0x7d4) {
        return 0;
      }
      if (uVar1 < 0x7d7) {
        if (uVar2 != 1) {
          return 1;
        }
        FUN_00402cf0(this);
        return 1;
      }
      return 0;
    }
    if (uVar1 == 0x7d3) {
      if (uVar2 != 1) {
        return 1;
      }
      FUN_00402d40((int)this);
      return 1;
    }
    if (uVar1 != 0x50f) {
      if (uVar1 != 0x7d2) {
        return 0;
      }
      if (uVar2 != 1) {
        return 1;
      }
      FUN_00402d20((int)this);
      return 1;
    }
switchD_0040235f_caseD_4f8:
    if (uVar2 == 1) goto LAB_0040236e;
    bVar3 = uVar2 == 5;
  }
  if (!bVar3) {
    return 1;
  }
LAB_0040236e:
  *(undefined4 *)((int)this + 0x24) = 1;
  return 1;
}


