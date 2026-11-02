/* Module: rmto3260.dll
   Function: FUN_662e0ef0
   Address: 662e0ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662e0ef0(void *this,byte *param_1,int param_2)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  
  if ((param_1 != (byte *)0x0) && (param_2 != 0)) {
    bVar1 = *param_1;
    *(uint *)((int)this + 8) = (uint)bVar1 << 0x18;
    uVar5 = (uint)param_1[1] << 0x10 | (uint)bVar1 << 0x18;
    *(uint *)((int)this + 8) = uVar5;
    uVar5 = uVar5 | (uint)param_1[2] << 8;
    *(uint *)((int)this + 8) = uVar5;
    *(uint *)((int)this + 8) = uVar5 | param_1[3];
    *(uint *)((int)this + 0xc) = (uint)param_1[4] << 0x18;
    uVar5 = *(uint *)((int)this + 0xc) | (uint)param_1[5] << 0x10;
    *(uint *)((int)this + 0xc) = uVar5;
    uVar5 = uVar5 | (uint)param_1[6] << 8;
    *(uint *)((int)this + 0xc) = uVar5;
    *(uint *)((int)this + 0xc) = uVar5 | param_1[7];
    *(ushort *)((int)this + 0x10) = (ushort)param_1[8] << 8;
    *(ushort *)((int)this + 0x10) = *(ushort *)((int)this + 0x10) | (ushort)param_1[9];
    if (*(short *)((int)this + 0x10) == 0) {
      *(ushort *)((int)this + 0x12) = (ushort)param_1[10] << 8;
      *(ushort *)((int)this + 0x12) = *(ushort *)((int)this + 0x12) | (ushort)param_1[0xb];
      pbVar3 = param_1 + 0xc + *(ushort *)((int)this + 0x12);
      if ((int)pbVar3 - (int)param_1 <= param_2) {
        *(byte **)((int)this + 0x14) = param_1 + 0xc;
        *(ushort *)((int)this + 0x18) = (ushort)*pbVar3 << 8;
        *(ushort *)((int)this + 0x18) = *(ushort *)((int)this + 0x18) | (ushort)pbVar3[1];
        pbVar4 = pbVar3 + 2 + *(ushort *)((int)this + 0x18);
        if ((int)pbVar4 - (int)param_1 <= param_2) {
          *(byte **)((int)this + 0x1a) = pbVar3 + 2;
          *(ushort *)((int)this + 0x1e) = (ushort)*pbVar4 << 8;
          *(ushort *)((int)this + 0x1e) = *(ushort *)((int)this + 0x1e) | (ushort)pbVar4[1];
          pbVar3 = pbVar4 + 2 + *(ushort *)((int)this + 0x1e);
          if ((int)pbVar3 - (int)param_1 <= param_2) {
            *(byte **)((int)this + 0x20) = pbVar4 + 2;
            *(ushort *)((int)this + 0x24) = (ushort)*pbVar3 << 8;
            *(ushort *)((int)this + 0x24) = *(ushort *)((int)this + 0x24) | (ushort)pbVar3[1];
            if ((int)(pbVar3 + 2 + ((uint)*(ushort *)((int)this + 0x24) - (int)param_1)) <= param_2)
            {
              *(byte **)((int)this + 0x26) = pbVar3 + 2;
            }
          }
        }
      }
    }
  }
  pcVar2 = *(char **)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x14) = 0;
  FUN_662e1090(this,pcVar2,(uint)*(ushort *)((int)this + 0x12));
  pcVar2 = *(char **)((int)this + 0x1a);
  *(undefined4 *)((int)this + 0x1a) = 0;
  FUN_662e1130(this,pcVar2,(uint)*(ushort *)((int)this + 0x18));
  pcVar2 = *(char **)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x20) = 0;
  FUN_662e11d0(this,pcVar2,(uint)*(ushort *)((int)this + 0x1e));
  pcVar2 = *(char **)((int)this + 0x26);
  *(undefined4 *)((int)this + 0x26) = 0;
  FUN_662e1270(this,pcVar2,(uint)*(ushort *)((int)this + 0x24));
  return 0;
}


