/* Module: encn3260.dll
   Function: FUN_664dab40
   Address: 664dab40
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __thiscall FUN_664dab40(void *this,char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    pcVar2 = (char *)0x0;
  }
  else {
    cVar1 = *param_1;
    pcVar2 = param_1 + 1;
    *(char *)this = cVar1;
    if (cVar1 == '\x01') {
      *(char *)((int)this + 1) = *pcVar2;
      *(ushort *)((int)this + 2) = (ushort)(byte)param_1[2] << 8;
      *(ushort *)((int)this + 2) = *(ushort *)((int)this + 2) | (ushort)(byte)param_1[3];
      *(uint *)((int)this + 4) = (uint)(byte)param_1[4] << 0x18;
      uVar3 = *(uint *)((int)this + 4) | (uint)(byte)param_1[5] << 0x10;
      *(uint *)((int)this + 4) = uVar3;
      uVar3 = uVar3 | (uint)(byte)param_1[6] << 8;
      *(uint *)((int)this + 4) = uVar3;
      *(uint *)((int)this + 4) = uVar3 | (byte)param_1[7];
      return param_1 + 8;
    }
  }
  return pcVar2;
}


