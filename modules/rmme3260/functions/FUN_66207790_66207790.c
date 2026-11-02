/* Module: rmme3260.dll
   Function: FUN_66207790
   Address: 66207790
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66207790(int param_1,byte *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  int local_40 [4];
  undefined4 local_2e;
  undefined4 local_2a;
  undefined4 local_26;
  undefined4 local_22;
  undefined4 local_1e;
  undefined4 local_1a;
  undefined4 local_16;
  undefined4 local_12;
  undefined4 local_e;
  uint local_8;
  
  FUN_6621a830(local_40);
  iVar2 = FUN_6621aa90(local_40,param_2,param_3);
  if ((-1 < iVar2) && (*(int *)(param_1 + 0x60) == 0)) {
    piVar1 = *(int **)(param_1 + 0x5c);
    if (piVar1 == (int *)0x0) {
      iVar2 = -0x7ffbfff9;
    }
    else {
      iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,&DAT_6626a628,param_1 + 0x60);
    }
  }
  if ((-1 < iVar2) && (piVar1 = *(int **)(param_1 + 0x60), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0xc))(piVar1,s_Flags_6626f4f8,local_8 & 0xffff);
    (**(code **)(**(int **)(param_1 + 0x60) + 0xc))
              (*(int **)(param_1 + 0x60),s_NumInterleavePackets_6626f4e0,local_1e);
    (**(code **)(**(int **)(param_1 + 0x60) + 0xc))
              (*(int **)(param_1 + 0x60),s_MaxPacketSize_6626f1a0,local_26);
    (**(code **)(**(int **)(param_1 + 0x60) + 0xc))
              (*(int **)(param_1 + 0x60),s_AvgPacketSize_6626f190,local_22);
    (**(code **)(**(int **)(param_1 + 0x60) + 0xc))
              (*(int **)(param_1 + 0x60),s_Duration_6626f170,local_1a);
    (**(code **)(**(int **)(param_1 + 0x60) + 0xc))
              (*(int **)(param_1 + 0x60),s_Preroll_6626f17c,local_16);
    (**(code **)(**(int **)(param_1 + 0x60) + 0xc))
              (*(int **)(param_1 + 0x60),s_IndexOffset_6626f4d4,local_12);
    (**(code **)(**(int **)(param_1 + 0x60) + 0xc))
              (*(int **)(param_1 + 0x60),s_DataOffset_6626f4c8,local_e);
    (**(code **)(**(int **)(param_1 + 0x60) + 0xc))
              (*(int **)(param_1 + 0x60),s_MaxBitRate_6626f1bc,local_2e);
    iVar2 = (**(code **)(**(int **)(param_1 + 0x60) + 0xc))
                      (*(int **)(param_1 + 0x60),s_AvgBitRate_6626f1b0,local_2a);
    FUN_6621a880(local_40);
    return iVar2;
  }
  FUN_6621a880(local_40);
  return iVar2;
}


