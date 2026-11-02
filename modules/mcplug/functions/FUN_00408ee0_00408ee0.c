/* Module: mcplug.dll
   Function: FUN_00408ee0
   Address: 00408ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00408ee0(uint param_1,HWND param_2)

{
  void *this;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *local_4;
  
  this = DAT_00487a70;
  local_4 = &DAT_00487a94;
  if (*(undefined1 **)(param_1 + 0xc) != (undefined1 *)0x1) {
    local_4 = &DAT_00487acc;
  }
  puVar5 = local_4;
  if ((DAT_00487a74 == (void *)0x0) || (DAT_00487a70 == (void *)0x0)) {
    return -0x7ffb1f7a;
  }
  if (local_4[8] == 0) {
    if (local_4[0xd] == 0) {
      return -0x7ffb1f7a;
    }
  }
  else if (((local_4[0xd] == 0) && (local_4[8] != 0)) && ((local_4[10] == 2 || (local_4[10] == 3))))
  {
    FUN_004167c0(&local_4,param_2,(int *)&param_2,(int *)&param_1,0,*(undefined1 **)(param_1 + 0xc))
    ;
    goto LAB_0040913a;
  }
  DAT_00487a78 = 1;
  if ((DAT_00487a74 == (void *)0x0) ||
     ((DAT_00487a7c == 0 &&
      (iVar1 = FUN_0046a5f0(DAT_00487a74,(int *)&param_2,(int *)&param_1,1), iVar1 < 0)))) {
    iVar1 = 0;
    do {
      puVar2 = &DAT_00487acc;
      if (iVar1 == 0) {
        puVar2 = &DAT_00487a94;
      }
      iVar1 = iVar1 + 1;
      puVar2[2] = 0;
      puVar2[0xc] = 0;
      puVar2[3] = 0xffffff3c;
      puVar2[6] = 0;
      puVar2[0xd] = 0;
      puVar2[7] = 0xffffff3c;
      puVar2[8] = 0;
      puVar2[9] = 0xfffffed8;
    } while (iVar1 < 2);
    DAT_00487b04 = 0;
    goto LAB_0040913a;
  }
  if (this == (void *)0x0) {
LAB_0040901c:
    param_1 = 0;
    iVar1 = -0x7fffbffb;
  }
  else {
    FUN_0046a350(this,(HKEY)0x2,(HKEY)0x0);
    iVar1 = FUN_0046a5f0(this,(int *)&param_2,(int *)&param_1,1);
    if ((param_1 != 4) && (param_1 != 0x10)) goto LAB_0040901c;
  }
  if ((DAT_00487a90 == 0) && (iVar1 != 0x4e12e)) {
    if (iVar1 == 0x4e130) goto LAB_004090a3;
    if (iVar1 == 0x4e137) goto LAB_00409044;
    param_1 = 0;
  }
  else {
LAB_00409044:
    if (-1 < iVar1) {
      iVar4 = 0;
      iVar1 = 2 - (uint)(param_1 < 0x10);
      if (0 < iVar1) {
        do {
          piVar3 = &DAT_00487acc;
          if (iVar4 == 0) {
            piVar3 = &DAT_00487a94;
          }
          piVar3[8] = 0;
          piVar3[9] = -0x127;
          if (*piVar3 != 0) {
            piVar3[0xc] = -1;
            piVar3[2] = 1;
            piVar3[3] = 200;
          }
          if (piVar3[4] != 0) {
            piVar3[0xd] = -1;
            piVar3[6] = 1;
            piVar3[7] = 200;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar1);
      }
    }
LAB_004090a3:
    puVar5 = local_4;
    DAT_00487b04 = param_1;
    if (0xf < param_1) goto LAB_0040913a;
  }
  iVar4 = 0;
  iVar1 = 2 - (uint)(param_1 != 0);
  DAT_00487b04 = param_1;
  if (0 < iVar1) {
    do {
      piVar3 = &DAT_00487a94;
      if (iVar4 == 0) {
        piVar3 = &DAT_00487acc;
      }
      piVar3[2] = 0;
      piVar3[0xc] = 0;
      if ((*piVar3 == 0) || (piVar3[8] == 0)) {
        piVar3[3] = -0xc6;
      }
      else {
        piVar3[3] = (-(uint)(DAT_00487a88 != 0) & 3) - 0xc5;
      }
      piVar3[6] = 0;
      piVar3[0xd] = 0;
      if ((piVar3[4] == 0) || (piVar3[8] == 0)) {
        piVar3[7] = -0xc6;
      }
      else {
        piVar3[7] = (-(uint)(DAT_00487a88 != 0) & 3) - 0xc5;
      }
      iVar4 = iVar4 + 1;
      puVar5 = local_4;
    } while (iVar4 < iVar1);
  }
LAB_0040913a:
  return (-(uint)(puVar5[0xd] != 0) & 0x7ffb1f7a) + 0x8004e086;
}


