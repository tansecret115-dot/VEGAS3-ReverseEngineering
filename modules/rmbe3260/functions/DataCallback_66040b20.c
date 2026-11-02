/* Module: rmbe3260.dll
   Function: DataCallback
   Address: 66040b20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: static long __stdcall CEngineVideoStream::DataCallback(void *,void *,struct
   tag_PNCODEC_DATA *) */

long CEngineVideoStream::DataCallback(void *param_1,void *param_2,tag_PNCODEC_DATA *param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int local_24;
  undefined4 local_20;
  uint local_1c;
  undefined2 local_16;
  uint local_10 [2];
  undefined2 local_8;
  
                    /* 0x40b20  1  ?DataCallback@CEngineVideoStream@@KGJPAX0PAUtag_PNCODEC_DATA@@@Z
                        */
  if (((byte)param_3[0xe] & 2) != 0) {
    *(undefined4 *)((int)param_1 + 0x10b) = *(undefined4 *)(param_3 + 8);
  }
  if (*(int *)param_3 != 0) {
    *(undefined4 *)((int)param_1 + 0x184) = 1;
    FUN_66042f00((void *)((int)param_1 + 0xc2),(uint *)param_3);
  }
  FUN_66040de0(param_1,*(int *)(param_3 + 8),(uint)(*(int *)param_3 != 0));
  uVar3 = *(uint *)(param_3 + 8);
  uVar1 = *(uint *)((int)param_1 + 0x72);
  if (uVar3 < uVar1) {
    uVar3 = (uVar3 - uVar1) - 1;
  }
  else {
    uVar3 = uVar3 - uVar1;
  }
  if ((899 < uVar3) || (*(int *)(param_3 + 0x10) != 0)) {
    FUN_66042f00((void *)((int)param_1 + 0xc2),(uint *)0x0);
  }
  bVar2 = false;
  FUN_6602f240(local_10);
  do {
    iVar4 = FUN_66042d70((void *)((int)param_1 + 0xc2),&local_24);
    if (iVar4 == 0) {
      local_8 = local_16;
      local_10[0] = local_1c;
      iVar4 = (**(code **)(*(int *)param_1 + 0x34))(local_20,local_24,local_10,1);
      if (iVar4 != 0) {
        *(undefined4 *)(*(int *)((int)param_1 + 0x42) + 4) = 1;
        return -0x7ffbff76;
      }
      FUN_66041050(param_1,local_1c,local_24);
    }
    else {
      bVar2 = true;
    }
  } while (!bVar2);
  return 0;
}


