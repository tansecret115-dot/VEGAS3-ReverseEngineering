/* Module: vegas30.exe
   Function: FUN_005ed690
   Address: 005ed690
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_005ed690(char *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *local_8;
  int *local_4;
  
  iVar4 = 0;
  if (*param_1 == '\0') goto LAB_005ed6d3;
  iVar4 = *(int *)(param_1 + 8);
  if ((*(byte *)(iVar4 + 0x18) & 2) != 2) {
    bVar1 = *(byte *)(*(int *)(iVar4 + 0x10) + 0x18);
    iVar3 = *(int *)(iVar4 + 0x10);
    while ((bVar1 & 2) != 2) {
      bVar1 = *(byte *)(*(int *)(iVar3 + 0x10) + 0x18);
      iVar4 = iVar3;
      iVar3 = *(int *)(iVar3 + 0x10);
    }
  }
  do {
    while( true ) {
      do {
        if (*param_1 == '\0') {
LAB_005ed6d3:
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(param_1 + 0xc);
        }
        if (iVar4 == iVar3) {
          return;
        }
        uVar2 = *(uint *)(*(int *)(iVar4 + 4) + 0x134);
        if ((uVar2 & 0x400) != 0) {
          *(uint *)(*(int *)(iVar4 + 4) + 0x134) = uVar2 | 0x80;
          local_4 = (int *)0x0;
          local_8 = (int *)0x0;
          iVar3 = FUN_005f1460(3,0);
          if (((iVar3 != 0) && (iVar3 = FUN_005f6990(&local_4), -1 < iVar3)) &&
             (iVar3 = (**(code **)*local_4)(local_4,&DAT_00610db0,&local_8), -1 < iVar3)) {
            (**(code **)(*local_8 + 0x60))(local_8);
          }
          if (local_8 != (int *)0x0) {
            (**(code **)(*local_8 + 8))(local_8);
          }
          if (local_4 != (int *)0x0) {
            (**(code **)(*local_4 + 8))(local_4);
          }
        }
      } while ((iVar4 == 0) || ((*(byte *)(iVar4 + 0x18) & 2) == 2));
      iVar3 = *(int *)(iVar4 + 0x14);
      iVar5 = iVar4;
      if ((*(byte *)(iVar3 + 0x18) & 2) == 2) break;
      bVar1 = *(byte *)(*(int *)(iVar3 + 0x10) + 0x18);
      iVar4 = iVar3;
      iVar3 = *(int *)(iVar3 + 0x10);
      while ((bVar1 & 2) != 2) {
        bVar1 = *(byte *)(*(int *)(iVar3 + 0x10) + 0x18);
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar3 + 0x10);
      }
    }
    do {
      iVar4 = *(int *)(iVar5 + 0xc);
      if (*(int *)(iVar4 + 0x10) == iVar5) break;
      iVar5 = iVar4;
    } while ((*(byte *)(iVar4 + 0x18) & 2) != 2);
  } while( true );
}


