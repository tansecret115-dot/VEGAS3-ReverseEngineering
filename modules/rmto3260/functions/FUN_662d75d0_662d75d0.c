/* Module: rmto3260.dll
   Function: FUN_662d75d0
   Address: 662d75d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662d75d0(void *this,int param_1,undefined4 param_2,ushort *param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  void *this_00;
  void *this_01;
  char local_8c [64];
  char local_4c [64];
  int local_c;
  int local_8;
  
  bVar1 = false;
  local_8 = 0;
  local_c = 0;
  if (9 < param_4) {
    FUN_662f2bd0(this,*param_3);
    iVar2 = FUN_662f2c20(*(uint *)(param_3 + 1));
    FUN_662d7760(iVar2 * 100,local_8c);
    iVar2 = FUN_662f2c20(*(uint *)(param_3 + 3));
    FUN_662d7760(iVar2 * 100,local_4c);
    iVar2 = FUN_662f2bd0(this_00,param_3[5]);
    uVar3 = FUN_662f2bd0(this_01,param_3[6]);
    switch(uVar3 & 0xffff) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    default:
      bVar1 = true;
      local_8 = FUN_662f0810(*(int **)(param_1 + 4),s_Unknown_event__EventID____hu_6630adb4);
      break;
    case 0x20:
    }
    if ((!bVar1) &&
       (local_8 = FUN_662d0970(&local_c,(undefined4 *)(param_3 + 7),iVar2 - 2), -1 < local_8)) {
      local_8 = FUN_662f0810(*(int **)(param_1 + 4),s__c__s__s__s_6630ada4);
    }
    if (local_c != 0) {
      FUN_662d08d0(&local_c);
    }
    return local_8;
  }
  return 0;
}


