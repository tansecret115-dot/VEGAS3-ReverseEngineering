/* Module: mpegin.dll
   Function: FUN_10007a60
   Address: 10007a60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_10007a60(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puStack_4;
  
  puVar3 = param_1;
  (**(code **)(*(int *)(param_1[0x4b95] + 0x310) + 0x14))
            (*(int *)(param_1[0x4b95] + 0x310),0,0x10000,0,0);
  *(undefined4 *)(puVar3[0x4b95] + 0x28) = 1;
  FUN_10007960((int)puVar3);
  iVar6 = *(int *)(puVar3[0x4b95] + 0x310);
  (**(code **)(iVar6 + 0x14))(iVar6,1,0x10001,puVar3[0x4b95] + 0x314,0x40);
  FUN_10005ce0((int *)(puVar3[0x4b95] + 0x128),0xffffff00,0x100);
  iVar6 = puVar3[0x4b95];
  param_1 = (undefined4 *)
            CONCAT13(*(undefined1 *)(iVar6 + 0x130),
                     CONCAT12((char)((uint)*(undefined4 *)(iVar6 + 0x130) >> 8),
                              CONCAT11((char)((uint)*(undefined4 *)(iVar6 + 0x130) >> 0x10),
                                       (char)((uint)*(undefined4 *)(iVar6 + 0x130) >> 0x18))));
  (**(code **)(*(int *)(iVar6 + 0x310) + 0xc))(*(int *)(iVar6 + 0x310),&param_1,4);
  do {
    if (((param_2 == 0) || (iVar6 = puVar3[0x4b95], *(int *)(iVar6 + 0x16c) != 0)) ||
       (*(int *)(iVar6 + 0x168) != 0)) {
      puVar3[0x6f] = 0xffffffff;
      uVar7 = FUN_10007690(puVar3,param_3);
      return uVar7;
    }
    (**(code **)(*(int *)(iVar6 + 0x310) + 0x14))
              (*(int *)(iVar6 + 0x310),1,0x10001,iVar6 + 0x314,0x40);
    do {
      iVar6 = puVar3[0x4b95];
      iVar1 = *(int *)(iVar6 + 300);
      if (*(uint *)(iVar6 + 0x138) < *(uint *)(iVar6 + 0x134)) {
        iVar8 = *(uint *)(iVar6 + 0x138) - iVar1;
      }
      else {
        iVar8 = *(uint *)(iVar6 + 0x134) - iVar1;
      }
      if (iVar8 < 1) {
        FUN_10007e90((int)puVar3,(byte *)s_Decode_To_Target_Frame____bytes_t_10018c64);
        return 0xffffffff;
      }
      uVar4 = (**(code **)(*(int *)(iVar6 + 0x310) + 0xc))(*(int *)(iVar6 + 0x310),iVar1,iVar8);
      uVar5 = (**(code **)(*(int *)(puVar3[0x4b95] + 0x310) + 0x14))
                        (*(int *)(puVar3[0x4b95] + 0x310),0,0x10003,0,0);
      iVar6 = FUN_10006340((int *)(puVar3[0x4b95] + 0x128),uVar4);
      if (iVar6 != 0) {
        if (*(int *)(puVar3[0x4b95] + 0x168) != 0) {
LAB_10007d4a:
          FUN_10007e90((int)puVar3,(byte *)s_Could_not_advance_video_pointer_i_10018bf8);
          return 1;
        }
        if ((uVar5 & 1) != 0) break;
        iVar6 = *(int *)(puVar3[0x4b95] + 0x310);
        (**(code **)(iVar6 + 0xc))(iVar6,0,0);
        uVar5 = (**(code **)(*(int *)(puVar3[0x4b95] + 0x310) + 0x14))
                          (*(int *)(puVar3[0x4b95] + 0x310),0,0x10003,0,0);
        if ((uVar5 & 1) == 0) goto LAB_10007d4a;
      }
    } while ((uVar5 & 1) == 0);
    (**(code **)(*(int *)(puVar3[0x4b95] + 0x310) + 0x14))
              (*(int *)(puVar3[0x4b95] + 0x310),0,0x10006,&puStack_4,4);
    puVar3[0x6f] = *puStack_4;
    puVar3[0x70] = puStack_4[1];
    puVar3[0x72] = puStack_4[3];
    if ((((uVar5 & 1) == 0) || ((uVar5 & 0x400000) == 0)) || ((uVar5 & 0x200000) == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (puVar3[0x70] != 3) {
      if (bVar2) {
        *(undefined4 *)(puVar3[0x4b95] + 0x3c) = 1;
      }
      else {
        *(undefined4 *)(puVar3[0x4b95] + 0x3c) = 0;
      }
      *(int *)(puVar3[0x4b95] + 0x30) = (*(int *)(puVar3[0x4b95] + 0x40) - param_3) + puVar3[0x6f];
      *(undefined4 *)(puVar3[0x4b95] + 0x34) = puVar3[0x6f];
      *(undefined4 *)(puVar3[0x4b95] + 0x38) = puVar3[0x70];
      *(undefined4 *)(puVar3[0x4b95] + 0x2c) = *(undefined4 *)(puVar3[0x4b95] + 0x28);
      FUN_10007960((int)puVar3);
    }
    param_2 = param_2 + -1;
  } while( true );
}


