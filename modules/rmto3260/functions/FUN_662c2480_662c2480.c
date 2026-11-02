/* Module: rmto3260.dll
   Function: FUN_662c2480
   Address: 662c2480
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_662c2480(int param_1,ushort *param_2,ushort *param_3)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar6;
  ushort local_2c;
  ushort uStack_2a;
  int local_14;
  int *local_10;
  int local_c;
  ushort local_6;
  
  iVar4 = 0;
  piVar1 = *(int **)(param_1 + 0x58);
  uVar3 = 0;
  uVar2 = 0;
  if (piVar1 == (int *)0x0) {
    iVar4 = -0x7ffbfff9;
  }
  if (((-1 < iVar4) && (iVar4 = (**(code **)(*piVar1 + 0x30))(piVar1,&local_6), -1 < iVar4)) &&
     (local_14 = 0, uVar6 = uStack_2a, uVar5 = local_2c, local_6 != 0)) {
    do {
      local_c = 0;
      iVar4 = (**(code **)(**(int **)(param_1 + 0x58) + 0x38))
                        (*(int **)(param_1 + 0x58),local_14,&local_10);
      if (-1 < iVar4) {
        iVar4 = FUN_662d0dc0((void *)*local_10,*local_10,(char *)&local_c,
                             s_video_x_pn_realvideo_6630a07c);
        if (local_c == 0) {
          iVar4 = FUN_662d0dc0((void *)*local_10,*local_10,(char *)&local_c,
                               s_video_x_pn_multirate_realvideo_6630a05c);
        }
        if ((-1 < iVar4) && (local_c != 0)) {
          iVar4 = *(int *)(*local_10 + 0x36);
          if ((iVar4 != 0) && (*(int *)(*local_10 + 0x32) != 0)) {
            uVar5 = CONCAT11(*(undefined1 *)(iVar4 + 0xc),*(undefined1 *)(iVar4 + 0xd));
            uVar6 = CONCAT11(*(undefined1 *)(iVar4 + 0xe),*(undefined1 *)(iVar4 + 0xf));
            local_2c = uVar5;
            uStack_2a = uVar6;
          }
          if (uVar2 < uVar5) {
            uVar2 = local_2c;
          }
          if (uVar3 < uVar6) {
            uVar3 = uStack_2a;
          }
        }
      }
      local_14 = local_14 + 1;
    } while ((ushort)local_14 < local_6);
  }
  *param_2 = uVar3;
  *param_3 = uVar2;
  return;
}


