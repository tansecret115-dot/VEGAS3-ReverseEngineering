/* Module: encn3260.dll
   Function: FUN_66489c50
   Address: 66489c50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66489c50(void *this,undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 local_24;
  undefined4 local_20;
  char *local_1c;
  undefined4 local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  undefined4 local_8;
  
  local_c = (int *)0x0;
  local_8 = 0;
  (**(code **)**(undefined4 **)((int)this + 4))
            (*(undefined4 **)((int)this + 4),&DAT_664dd890,&local_c);
  if (local_c == (int *)0x0) {
    local_10 = (int *)0x0;
    (**(code **)**(undefined4 **)((int)this + 4))
              (*(undefined4 **)((int)this + 4),&DAT_664dd880,&local_10);
    if (local_10 != (int *)0x0) {
      piVar9 = (int *)local_10[9];
      iVar2 = FUN_664cf460(piVar9);
      if (iVar2 == 0) {
        local_8 = 0x80004005;
        (**(code **)(*local_10 + 8))(local_10);
        return local_8;
      }
      local_24 = 0;
      local_20 = 0;
      local_8 = 0;
      local_18 = 0;
      local_1c = (char *)0x0;
      local_14 = (int *)0x0;
      FUN_664cf170(piVar9,0,&local_24,&local_20,&local_8,&local_18,&local_1c,&local_14);
      piVar9 = local_14;
      uVar5 = 0xffffffff;
      piVar10 = local_14;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        iVar2 = *piVar10;
        piVar10 = (int *)((int)piVar10 + 1);
      } while ((char)iVar2 != '\0');
      puVar4 = operator_new(~uVar5);
      uVar5 = 0xffffffff;
      do {
        piVar10 = piVar9;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        piVar10 = (int *)((int)piVar9 + 1);
        iVar2 = *piVar9;
        piVar9 = piVar10;
      } while ((char)iVar2 != '\0');
      uVar5 = ~uVar5;
      puVar7 = (undefined4 *)((int)piVar10 - uVar5);
      puVar11 = puVar4;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar11 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      local_8 = 0;
      *param_1 = puVar4;
      (**(code **)(*local_10 + 8))(local_10);
      return 0;
    }
    local_8 = 0x80004005;
  }
  else {
    iVar2 = (**(code **)(*local_c + 0x2c))
                      (local_c,s_PluginType_664e2734,s_PLUGIN_STREAM_DESC_664e2740,0,0,0,0,&local_18
                      );
    if (iVar2 == 0) {
      (**(code **)(*local_c + 0x14))(local_c,local_18,&local_10);
      (**(code **)(*local_10 + 0x30))(local_10,s_StreamDescription_664e2720,&local_14);
      (**(code **)(*local_10 + 8))(local_10);
      pcVar3 = (char *)(**(code **)(*local_14 + 0x1c))(local_14);
      uVar5 = 0xffffffff;
      pcVar8 = pcVar3;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      local_1c = operator_new(~uVar5);
      uVar5 = 0xffffffff;
      do {
        pcVar8 = pcVar3;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar8 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar8;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar3 = pcVar8 + -uVar5;
      pcVar8 = local_1c;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar8 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar8 = pcVar8 + 1;
      }
      *param_1 = local_1c;
      (**(code **)(*local_14 + 8))(local_14);
    }
    else {
      local_8 = 0x80004005;
    }
    if (local_c != (int *)0x0) {
      (**(code **)(*local_c + 8))(local_c);
      return local_8;
    }
  }
  return local_8;
}


