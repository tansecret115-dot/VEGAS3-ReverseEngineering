/* Module: rmto3260.dll
   Function: FUN_662cfc20
   Address: 662cfc20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662cfc20(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  ushort uStack_1e;
  undefined2 uStack_1c;
  ushort local_18;
  undefined2 uStack_16;
  ushort local_12;
  undefined2 uStack_10;
  ushort local_c;
  undefined2 uStack_a;
  
  uStack_1e = 0;
  local_18 = 0;
  local_12 = 0;
  local_c = 0;
  puVar1 = (undefined4 *)0x0;
  puVar2 = (undefined4 *)0x0;
  puVar3 = (undefined4 *)0x0;
  puVar4 = (undefined4 *)0x0;
  if ((param_1 != 0) &&
     (puVar1 = (undefined4 *)0x0, puVar2 = (undefined4 *)0x0, puVar3 = (undefined4 *)0x0,
     puVar4 = (undefined4 *)0x0, param_2 != 0)) {
    puVar1 = (undefined4 *)0x0;
    puVar2 = (undefined4 *)0x0;
    puVar3 = (undefined4 *)0x0;
    puVar4 = (undefined4 *)0x0;
    if (CONCAT11(*(undefined1 *)(param_1 + 8),*(undefined1 *)(param_1 + 9)) == 0) {
      uStack_1e = CONCAT11(*(undefined1 *)(param_1 + 10),*(undefined1 *)(param_1 + 0xb));
      puVar5 = (undefined4 *)(param_1 + 0xc);
      puVar7 = (undefined1 *)((uint)uStack_1e + (int)puVar5);
      puVar1 = (undefined4 *)0x0;
      puVar2 = (undefined4 *)0x0;
      puVar3 = (undefined4 *)0x0;
      puVar4 = (undefined4 *)0x0;
      if ((int)puVar7 - param_1 <= param_2) {
        local_18 = CONCAT11(*puVar7,puVar7[1]);
        puVar6 = (undefined4 *)(puVar7 + 2);
        puVar7 = (undefined1 *)((uint)local_18 + (int)puVar6);
        puVar1 = puVar5;
        puVar2 = (undefined4 *)0x0;
        puVar3 = (undefined4 *)0x0;
        puVar4 = (undefined4 *)0x0;
        if ((int)puVar7 - param_1 <= param_2) {
          local_12 = CONCAT11(*puVar7,puVar7[1]);
          puVar5 = (undefined4 *)(puVar7 + 2);
          puVar7 = (undefined1 *)((uint)local_12 + (int)puVar5);
          puVar2 = puVar6;
          puVar3 = (undefined4 *)0x0;
          puVar4 = (undefined4 *)0x0;
          if ((int)puVar7 - param_1 <= param_2) {
            local_c = CONCAT11(*puVar7,puVar7[1]);
            puVar3 = puVar5;
            puVar4 = (undefined4 *)0x0;
            if ((int)((int)(puVar7 + 2) + ((uint)local_c - param_1)) <= param_2) {
              puVar4 = (undefined4 *)(puVar7 + 2);
            }
          }
        }
      }
    }
  }
  uStack_a = SUB42(puVar4,0);
  uStack_10 = SUB42(puVar3,0);
  uStack_16 = SUB42(puVar2,0);
  uStack_1c = SUB42(puVar1,0);
  FUN_662f0810(*(int **)((int)this + 0x28),s______________________6630a5c4);
  FUN_662f0810(*(int **)((int)this + 0x28),s_RM_CONTENT_OBJECT_6630a7e0);
  FUN_662cfec0((int)this);
  FUN_662f0810(*(int **)((int)this + 0x28),s_size___lu_bytes_6630a598);
  FUN_662f0810(*(int **)((int)this + 0x28),s_object_version___hu_6630a3e4);
  FUN_662cfe30(this,puVar1,CONCAT22(uStack_1c,uStack_1e),s_title___s_6630a7d4);
  FUN_662cfe30(this,puVar2,CONCAT22(uStack_16,local_18),s_author___s_6630a7c8);
  FUN_662cfe30(this,puVar3,CONCAT22(uStack_10,local_12),s_copyright___s_6630a7b8);
  FUN_662cfe30(this,puVar4,CONCAT22(uStack_a,local_c),s_comment___s_6630a7a8);
  return 0;
}


