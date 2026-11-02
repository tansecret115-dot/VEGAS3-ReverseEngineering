/* Module: vidpcore.dll
   Function: GetPixelAspect
   Address: 5dea1370
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: double __thiscall CSfSurface::GetPixelAspect(void) */

double __thiscall CSfSurface::GetPixelAspect(CSfSurface *this)

{
                    /* 0xa1370  10  ?GetPixelAspect@CSfSurface@@QAENXZ */
  return *(double *)(this + 0x440);
}


