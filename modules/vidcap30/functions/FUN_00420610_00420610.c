/* Module: vidcap30.exe
   Function: FUN_00420610
   Address: 00420610
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_00420610(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *unaff_EBX;
  int unaff_ESI;
  int *unaff_EDI;
  int *piVar4;
  bool bVar5;
  int local_54;
  undefined4 local_50;
  int aiStack_4c [7];
  int aiStack_30 [8];
  int *piStack_10;
  int *piStack_c;
  int *piStack_8;
  int *piStack_4;
  
  piVar3 = aiStack_4c;
  for (iVar2 = 0x12; piVar3 = piVar3 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = 0;
  }
  local_54 = 0;
  local_50 = 0;
  (**(code **)(*param_1 + 0x18))(param_1);
  if (unaff_EBX == (int *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x30))(param_1,&stack0xffffffa0);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    (**(code **)(*unaff_EDI + 0x14))(unaff_EDI);
    iVar2 = (**(code **)(local_54 + 0xc))(&local_54,1,&piStack_10,&stack0xffffffa0);
    while (iVar2 == 0) {
      if (piStack_c == (int *)0x0) {
        piStack_c = piStack_10;
      }
      if (piStack_8 == (int *)0x0) {
        piStack_8 = piStack_10 + 4;
      }
      if (piStack_4 == (int *)0x0) {
        piStack_4 = piStack_10 + 0xb;
      }
      iVar2 = 4;
      bVar5 = true;
      piVar3 = piStack_c;
      piVar4 = piStack_10;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *piVar3 == *piVar4;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (bVar5);
      if (bVar5) {
        iVar2 = 4;
        bVar5 = true;
        piVar3 = piStack_8;
        piVar4 = piStack_10 + 4;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar5 = *piVar3 == *piVar4;
          piVar3 = piVar3 + 1;
          piVar4 = piVar4 + 1;
        } while (bVar5);
        if (bVar5) {
          iVar2 = 4;
          bVar5 = true;
          piVar3 = piStack_4;
          piVar4 = piStack_10 + 0xb;
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            bVar5 = *piVar3 == *piVar4;
            piVar3 = piVar3 + 1;
            piVar4 = piVar4 + 1;
          } while (bVar5);
          if (bVar5) {
            unaff_ESI = 1;
          }
        }
      }
      FUN_0057b1c0(piStack_10);
      iVar2 = (**(code **)(local_54 + 0xc))(&local_54,1,&piStack_10,&stack0xffffffa0);
    }
  }
  else {
    (**(code **)(*unaff_EBX + 8))(unaff_EBX);
    iVar2 = (**(code **)(*param_1 + 0x1c))(param_1,&local_54);
    if (-1 < iVar2) {
      piStack_10 = (int *)&stack0xffffffa4;
      if (piStack_c == (int *)0x0) {
        piStack_c = (int *)&stack0xffffffa4;
      }
      piVar3 = piStack_8;
      if (piStack_8 == (int *)0x0) {
        piVar3 = aiStack_4c;
      }
      if (piStack_4 == (int *)0x0) {
        piStack_4 = aiStack_30;
      }
      iVar2 = 4;
      bVar5 = true;
      piVar4 = (int *)&stack0xffffffa4;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *piStack_c == *piVar4;
        piStack_c = piStack_c + 1;
        piVar4 = piVar4 + 1;
      } while (bVar5);
      if (bVar5) {
        iVar2 = 4;
        bVar5 = true;
        piVar4 = aiStack_4c;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar5 = *piVar3 == *piVar4;
          piVar3 = piVar3 + 1;
          piVar4 = piVar4 + 1;
        } while (bVar5);
        if (bVar5) {
          iVar2 = 4;
          bVar5 = true;
          piVar3 = aiStack_30;
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            bVar5 = *piStack_4 == *piVar3;
            piStack_4 = piStack_4 + 1;
            piVar3 = piVar3 + 1;
          } while (bVar5);
          if (bVar5) {
            unaff_ESI = 1;
          }
        }
      }
      FUN_004207c0(&stack0xffffffa4);
    }
  }
  if (&local_54 != (int *)0x0) {
    (**(code **)(local_54 + 8))(&local_54);
  }
  return (uint)(unaff_ESI == 0);
}


