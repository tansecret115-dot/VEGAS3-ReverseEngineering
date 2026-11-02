/* Module: vegas30k.dll
   Function: FUN_01184870
   Address: 01184870
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 __thiscall
FUN_01184870(int param_1,uint param_2,int param_3,int param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_4 = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x608);
  local_c = 0;
  while ((puVar1 != (undefined4 *)0x0 &&
         ((**(code **)(*(int *)*puVar1 + 0x8c))((int *)*puVar1,0x33,&local_c), local_c != param_4)))
  {
    puVar1 = (undefined4 *)puVar1[0x5b];
  }
  *param_5 = puVar1;
  if (((puVar1 != (undefined4 *)0x0) && ((puVar1[0xe] & 4) != 0)) && ((puVar1[0xe] & 0x10000) == 0))
  {
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0x16] = *(undefined4 *)(param_1 + 0x8a0);
    puVar1[0x17] = *(undefined4 *)(param_1 + 0x8a4);
    puVar1[0x18] = 0;
    puVar1[0xf] = 0;
    do {
      uVar2 = puVar1[0xc];
      iVar3 = puVar1[0xd];
      uVar6 = param_2 - uVar2;
      uVar4 = (*(code *)puVar1[7])
                        (param_1,0x20,puVar1[8],puVar1 + 1,
                         (uint)*(ushort *)(puVar1 + 4) * puVar1[0xc] + puVar1[9],puVar1[0xf],
                         *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),puVar1[0x16]
                         ,puVar1[0x17],uVar6,0,*(undefined4 *)(param_1 + 0x894),
                         *(undefined4 *)(param_1 + 0x898),*(undefined4 *)(param_1 + 0x89c));
      iVar5 = (int)uVar4 >> 0x1f;
      if (uVar4 == 0xfffffffe) {
        puVar1[0xb] = 1;
        uVar4 = uVar6;
        iVar5 = (param_3 - iVar3) - (uint)(param_2 < uVar2);
      }
      else {
        if (uVar4 == 0xfffffffd) {
          local_8 = 0xfffffffd;
          local_4 = 0xffffffff;
          break;
        }
        puVar1[0xb] = 0;
      }
      uVar2 = puVar1[0xc];
      puVar1[0xf] = 0;
      puVar1[0x18] = 0;
      puVar1[0xc] = uVar2 + uVar4;
      uVar6 = puVar1[0x16];
      puVar1[0xd] = puVar1[0xd] + iVar5 + (uint)CARRY4(uVar2,uVar4);
      puVar1[0x16] = uVar6 + uVar4;
      uVar2 = puVar1[0x14];
      puVar1[0x17] = puVar1[0x17] + iVar5 + (uint)CARRY4(uVar6,uVar4);
      puVar1[0x14] = uVar2 + uVar4;
      puVar1[0x15] = puVar1[0x15] + iVar5 + (uint)CARRY4(uVar2,uVar4);
      if ((param_3 < (int)puVar1[0xd]) ||
         ((param_3 <= (int)puVar1[0xd] && (param_2 <= (uint)puVar1[0xc])))) break;
    } while( true );
  }
  return CONCAT44(local_4,local_8);
}


