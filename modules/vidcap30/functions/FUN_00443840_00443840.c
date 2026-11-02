/* Module: vidcap30.exe
   Function: FUN_00443840
   Address: 00443840
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00443840(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *local_8c;
  undefined4 local_88 [8];
  undefined4 local_68;
  undefined4 local_64;
  
  FUN_0042f4b0(param_2,1);
  uVar1 = *(undefined4 *)(param_3 + 0x10);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  puVar3 = local_88;
  for (iVar4 = 0x22; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_68 = param_4;
  local_64 = param_5;
  uVar2 = FUN_004449e0(param_3,local_88);
  puVar3 = calloc(1,0x88);
  if (puVar3 == (undefined4 *)0x0) {
    iVar4 = -0x7ff8fff2;
  }
  else {
    local_8c = puVar3;
    iVar4 = _SfList_InsertList_16(uVar1,uVar2,&local_8c,1);
    if (iVar4 < 0) {
      free(puVar3);
    }
    else {
      *puVar3 = 3;
      uVar5 = FUN_0042e490(param_2);
      *(undefined8 *)(puVar3 + 2) = uVar5;
      iVar4 = FUN_00443970(puVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      FUN_004442f0(param_2,puVar3,0);
      if (-1 < iVar4) {
        if (param_1 != (undefined4 *)0x0) {
          *param_1 = puVar3;
        }
        **(uint **)(param_2 + 4) = **(uint **)(param_2 + 4) | 0x200;
      }
    }
  }
  FUN_0042f5d0(param_2,1);
  return iVar4;
}


