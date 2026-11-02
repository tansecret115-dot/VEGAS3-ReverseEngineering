/* Module: pncrt.dll
   Function: _inp
   Address: 7801e6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _inp(ushort param_1)

{
  byte bVar1;
  
                    /* 0x1e6d0  282  _inp */
  bVar1 = in(param_1);
  return (uint)bVar1;
}


