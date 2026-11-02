/* Module: mpegin.dll
   Function: FUN_10007690
   Address: 10007690
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_10007690(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  puVar2 = param_1;
  iVar5 = param_2;
  if (param_1[0x6f] != param_2) {
    do {
      iVar1 = puVar2[0x4b95];
      if (*(int *)(iVar1 + 0x16c) != 0) break;
      (**(code **)(*(int *)(iVar1 + 0x310) + 0x14))
                (*(int *)(iVar1 + 0x310),*(undefined4 *)(iVar1 + 0x120),0x10001,iVar1 + 0x314,0x40);
      do {
        iVar5 = puVar2[0x4b95];
        iVar1 = *(int *)(iVar5 + 300);
        if (*(uint *)(iVar5 + 0x138) < *(uint *)(iVar5 + 0x134)) {
          iVar6 = *(uint *)(iVar5 + 0x138) - iVar1;
        }
        else {
          iVar6 = *(uint *)(iVar5 + 0x134) - iVar1;
        }
        if (iVar6 < 1) {
          FUN_10007e90((int)puVar2,(byte *)s_Decode_Next_Picture____bytes_to_p_10018c30);
          return 0xffffffff;
        }
        uVar3 = (**(code **)(*(int *)(iVar5 + 0x310) + 0xc))(*(int *)(iVar5 + 0x310),iVar1,iVar6);
        uVar4 = (**(code **)(*(int *)(puVar2[0x4b95] + 0x310) + 0x14))
                          (*(int *)(puVar2[0x4b95] + 0x310),0,0x10003,0,0);
        iVar5 = FUN_10006340((int *)(puVar2[0x4b95] + 0x128),uVar3);
        if (iVar5 != 0) {
          if (*(int *)(puVar2[0x4b95] + 0x168) != 0) {
LAB_100078eb:
            FUN_10007e90((int)puVar2,(byte *)s_Could_not_advance_video_pointer_i_10018bf8);
            return 1;
          }
          if ((uVar4 & 1) != 0) break;
          iVar5 = *(int *)(puVar2[0x4b95] + 0x310);
          (**(code **)(iVar5 + 0xc))(iVar5,0,0);
          uVar4 = (**(code **)(*(int *)(puVar2[0x4b95] + 0x310) + 0x14))
                            (*(int *)(puVar2[0x4b95] + 0x310),0,0x10003,0,0);
          if ((uVar4 & 1) == 0) goto LAB_100078eb;
        }
      } while ((uVar4 & 1) == 0);
      if (((uVar4 & 0x400) != 0) && (-1 < (int)puVar2[0x6f])) {
        param_2 = 0;
      }
      (**(code **)(*(int *)(puVar2[0x4b95] + 0x310) + 0x14))
                (*(int *)(puVar2[0x4b95] + 0x310),0,0x10006,&param_1,4);
      puVar2[0x6f] = *param_1;
      puVar2[0x70] = param_1[1];
      puVar2[0x72] = param_1[3];
      if ((((uVar4 & 1) == 0) || ((uVar4 & 0x400000) == 0)) || ((uVar4 & 0x200000) == 0)) {
        iVar5 = 0;
      }
      else {
        iVar5 = 1;
      }
      if (puVar2[0x70] != 3) {
        if (iVar5 == 0) {
          *(undefined4 *)(puVar2[0x4b95] + 0x3c) = 0;
        }
        else {
          *(undefined4 *)(puVar2[0x4b95] + 0x3c) = 1;
        }
        *(int *)(puVar2[0x4b95] + 0x30) = (*(int *)(puVar2[0x4b95] + 0x40) - param_2) + puVar2[0x6f]
        ;
        *(undefined4 *)(puVar2[0x4b95] + 0x34) = puVar2[0x6f];
        *(undefined4 *)(puVar2[0x4b95] + 0x38) = puVar2[0x70];
        *(undefined4 *)(puVar2[0x4b95] + 0x2c) = *(undefined4 *)(puVar2[0x4b95] + 0x28);
        FUN_10007960((int)puVar2);
      }
    } while (puVar2[0x6f] != param_2);
  }
  if (puVar2[0x70] == 3) {
    if ((iVar5 != 0) && (iVar5 = puVar2[0x4b95], *(int *)(iVar5 + 0x120) != 1)) {
      FUN_10007490((int)puVar2,(undefined4 *)(iVar5 + 0x10 + *(int *)(iVar5 + 0x28) * 0xc));
      return 0;
    }
    iVar5 = puVar2[0x4b95];
    if (*(int *)(iVar5 + 0x3c) != 0) {
      FUN_10007490((int)puVar2,(undefined4 *)(iVar5 + 0x10 + *(int *)(iVar5 + 0x2c) * 0xc));
      return 0;
    }
  }
  else if (iVar5 != 0) {
    FUN_10007490((int)puVar2,
                 (undefined4 *)(puVar2[0x4b95] + 0x10 + *(int *)(puVar2[0x4b95] + 0x2c) * 0xc));
    return 0;
  }
  FUN_10007490((int)puVar2,(undefined4 *)0x0);
  return 0;
}


